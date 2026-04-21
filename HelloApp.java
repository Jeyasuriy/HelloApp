public class HelloApp {
    public static void main(String[] args) {
        // Default name
        String name = "World";

        // Check if a name is provided
        if (args.length > 0) {
            name = args[0];
        }

        System.out.println("Hello, " + name + "!");
    }
}