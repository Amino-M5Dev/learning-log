package Exercises;
import java.util.Scanner;
// THIS SCRIPT WILL CALCULATE THE AREA OF A RECTANGLE.

public class AreaRectangle {
    public static void main(String[] args) {

        Scanner keyboard = new Scanner(System.in);

        double width = 0;
        double height = 0;
        double area = 0;

        System.out.println("--- RECTANGLE AREA CALCULATOR ---");
        System.out.print("Enter the width (in cm): ");
        width = keyboard.nextDouble();
        System.out.print("Enter the height (in cm): ");
        height = keyboard.nextDouble();

        area = width * height;
        System.out.println("Area = " + area + "cm2");

        keyboard.close();
    }
}
