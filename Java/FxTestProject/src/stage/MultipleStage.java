package stage;

import javafx.application.Application;
import javafx.scene.*;
import javafx.event.*;
import javafx.scene.control.Button;
import javafx.stage.Stage;

public class MultipleStage extends Application{

	public static void main(String[] args) {
		Application.launch(MultipleStage.class);
	}

	@Override
	public void start(Stage primaryStage) throws Exception {
		Scene scene = new Scene(new Button("OK"), 200, 250);
		primaryStage.setTitle("MyJavaFX"); // Set the stage title
		primaryStage.setScene(scene); // Place the scene in the stage
		primaryStage.show(); // Display the stage

		Stage stage = new Stage(); // Create a new stage
		stage.setTitle("Second Stage"); // Set the stage title
		 // Set a scene with a button in the stage
		stage.setScene(new Scene(new Button("New Stage"), 100, 100));
		stage.show(); // Display the stage
	}


}
