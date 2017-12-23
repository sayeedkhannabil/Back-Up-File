package TestPackage;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import javax.swing.Timer;

import javax.swing.JPanel;


public class Gameplay extends JPanel implements KeyListener, ActionListener{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	private boolean play = false;
	private Timer time;
	private int delay = 8;

	private int playerX = 310;

	private int ballposX = 120;
	private int ballposY = 350;
	private int ballXdir = -1;
	private int ballYdir = -2;

	private MapGenerator map;


	public Gameplay(){
		map = new MapGenerator(3, 7);
		addKeyListener(this);
		setFocusable(true);
		setFocusTraversalKeysEnabled(false);
		time = new Timer(delay, this);
		time.start();
	}

	public void paint(Graphics g){
		//background
		g.setColor(Color.black);
		g.fillRect(1, 1, 692,592);

		//drawing map
		map.draw((Graphics2D)g);

		//boarders
		g.setColor(Color.yellow);
		g.fillRect(0, 0, 3, 592);
		g.fillRect(0, 0, 692, 3);
		g.fillRect(681, 0, 3, 592);

		//paddle
		g.setColor(Color.green);
		g.fillRect(playerX, 550, 100, 8);

		//the ball
		g.setColor(Color.yellow);
		g.fillOval(ballposX, ballposY, 20, 20);

		g.dispose();
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		time.start();
		if(play){
			if(new Rectangle(ballposX, ballposY, 20, 20)
					.intersects(new Rectangle(playerX, 550, 100, 8))){
				ballYdir = -ballYdir;
			}

			A:for(int i = 0; i<map.map.length; i++){
				for(int j =0; j<map.map[0].length; j++){
					if(map.map[i][j]>0){
						int brickX = j*map.brickWidth +80;
						int brickY = i*map.brickHeight +50;
						int brickWidth = map.brickWidth;
						int brickHeight = map.brickHeight;

						Rectangle rect = new Rectangle(brickX, brickY, brickWidth, brickHeight);
						Rectangle ballRect = new Rectangle(ballposX, ballposY, 20, 20);
						Rectangle brickRect = rect;

						if(ballRect.intersects(brickRect)){
							map.setBrickValue(0, i, j);
							if(ballposX + 19 <= brickRect.x ||
									ballposX + 1 >= brickRect.x + brickRect.width){

								ballXdir = - ballXdir;
							}

							else{
								ballYdir = -ballYdir;
							}

							break A;
						}
					}
				}
			}

			ballposX += ballXdir;
			ballposY += ballYdir;

			if(ballposX<0){
				ballXdir = -ballXdir;
			}

			if(ballposY<0){
				ballYdir = -ballYdir;
			}

			if(ballposX > 670){
				ballXdir = -ballXdir;
			}
		}
		repaint();

	}

	@Override
	public void keyTyped(KeyEvent e) {

	}

	@Override
	public void keyReleased(KeyEvent e) {

	}

	@Override
	public void keyPressed(KeyEvent e) {
		if(e.getKeyCode() == KeyEvent.VK_RIGHT){
			if(playerX >= 600){
				playerX = 600;
			}

			else
				moveRight();
		}

		if(e.getKeyCode() == KeyEvent.VK_LEFT){
			if(playerX<10)
				playerX = 10;

			else
				moveLeft();
		}
	}

	public void moveRight(){
		play = true;
		playerX += 20;
	}

	public void moveLeft(){
		play = true;
		playerX -= 20;
	}

}
