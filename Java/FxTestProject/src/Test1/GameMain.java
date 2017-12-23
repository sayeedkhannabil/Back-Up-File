package Test1;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;
import javafx.event.*;
import javafx.scene.*;


public class GameMain extends Application {
	final static int WIDTH = 1280;
	final static int HEIGTH = 640;

	final static Image BACKGROUND = new Image(GameMain.class.getResource("background.png").toString());
	final static Image PLAYER = new Image(GameMain.class.getResource("player.jpeg").toString());

	public static void main(String[] args) {
		launch(args);
	}

	@Override
	public void start(Stage primaryStage) {
		final ImageView background = new ImageView(BACKGROUND);
		ImageView player = new ImageView(PLAYER);
		final Group root = new Group(background, player);
		primaryStage.setTitle("Game");
		primaryStage.setScene(new Scene(root, WIDTH, HEIGTH));
		primaryStage.setResizable(false);
		primaryStage.show();
	}
}
