import java.util.Scanner;

public class Main
{
    public static void main(String[] args) {

        // THIS IS MY FIRST JAVA PROGRAM
        // THIS SCRIPT WILL BE USED TO TEST ALL CODES BEFORE IMPLEMENTING IN A NEW FILE

        Scanner keyboard = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = keyboard.nextLine();

        System.out.print("Enter your age: ");
        int age = keyboard.nextInt();
        keyboard.nextLine();

        System.out.print("Enter your department: ");
        String department = keyboard.nextLine();

        System.out.print("Are you a student (true/false): ");
        boolean isStudent = keyboard.nextBoolean();


        System.out.println();
        System.out.println("Hello " + name);
        System.out.println("You're " + age + "y old");

        if(isStudent) {
            System.out.println("You are enrolled as a student!");
            System.out.println("You're a student of " + department + " department");
        } else {
            System.out.println("You are not enrolled!");
        }



        keyboard.close();
    }
}