package TestPackage;

import javax.swing.*;

public class Gui {
    public static void main(String[] args) {
        String input = JOptionPane.showInputDialog("Enter a line");

        System.out.println(input);

        JOptionPane.showMessageDialog(null, input);
    }
}
