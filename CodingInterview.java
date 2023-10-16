import java.util.Scanner;

public class CodingInterviewApp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Welcome to the Coding Interview Practice App!");
        System.out.println("Select a programming language: ");
        System.out.println("1. Java");
        System.out.println("2. Python");
        System.out.println("3. JavaScript");

        int selectedLanguage = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character

        System.out.println("Choose a coding problem to solve:");
        System.out.println("1. Palindrome Checker");
        System.out.println("2. Fibonacci Sequence");
        System.out.println("3. Factorial Calculator");

        int selectedProblem = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character

        String problemStatement = "";
        switch (selectedProblem) {
            case 1:
                problemStatement = "Write a function to check if a given string is a palindrome.";
                break;
            case 2:
                problemStatement = "Write a function to generate the first n numbers in the Fibonacci sequence.";
                break;
            case 3:
                problemStatement = "Write a function to calculate the factorial of a non-negative integer.";
                break;
            default:
                System.out.println("Invalid choice. Exiting the app.");
                return;
        }

        System.out.println("Problem to solve: " + problemStatement);
        System.out.println("Start coding! Type your solution below:");

        String userSolution = scanner.nextLine();
        System.out.println("Your solution: " + userSolution);

        System.out.println("Run test cases (Y/N)?");
        String runTests = scanner.nextLine();

        if (runTests.equalsIgnoreCase("Y")) {
            // Simplified test cases (assuming correct input from the user)
            if (selectedProblem == 1) {
                System.out.println("Test Case 1: " + isPalindrome(userSolution));
                System.out.println("Test Case 2: " + isPalindrome("hello"));
            } else if (selectedProblem == 2) {
                System.out.println("Test Case 1: " + fibonacci(5));
                System.out.println("Test Case 2: " + fibonacci(10));
            } else if (selectedProblem == 3) {
                System.out.println("Test Case 1: " + factorial(5));
                System.out.println("Test Case 2: " + factorial(8));
            }
        }

        System.out.println("Thank you for using the Coding Interview Practice App!");
        scanner.close();
    }

    // Palindrome Checker
    private static boolean isPalindrome(String str) {
        String reversed = new StringBuilder(str).reverse().toString();
        return str.equalsIgnoreCase(reversed);
    }

    // Fibonacci Sequence
    private static int fibonacci(int n) {
        if (n <= 1) {
            return n;
        }
        int fib = 1;
        int prevFib = 1;
        for (int i = 2; i < n; i++) {
            int temp = fib;
            fib += prevFib;
            prevFib = temp;
        }
        return fib;
    }

    // Factorial Calculator
    private static int factorial(int n) {
        if (n == 0) {
            return 1;
        }
        int result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}
