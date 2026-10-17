import java.util.Scanner;

public class Madlibs {
    public static void main(String[] args) {

        // MAD LIBS GAME

        Scanner keyboard = new Scanner(System.in);

        String adjectives1;
        String noun1;
        String adjectives2;
        String verb1;
        String adjectives3;

        System.out.print("Enter an adjective (description): ");
        adjectives1 = keyboard.nextLine();
        System.out.print("Enter a noun (animal or person): ");
        noun1 = keyboard.nextLine();
        System.out.print("Enter an adjective (description): ");
        adjectives2 = keyboard.nextLine();
        System.out.print("Enter a verb end with -ing (action): ");
        verb1 = keyboard.nextLine();
        System.out.print("Enter an adjective (description): ");
        adjectives3 = keyboard.nextLine();

        System.out.println("\nToday I went to a " + adjectives1 + " zoo.");
        System.out.println("In a exhibit, I saw a " + noun1 + ".");
        System.out.println(noun1 + " was " + adjectives2 + " and " + verb1 + ".");
        System.out.println("I was " + adjectives3 + "!");

        keyboard.close();

    }
}
