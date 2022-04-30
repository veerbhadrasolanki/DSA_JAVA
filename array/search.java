import java.util.Scanner;

class search {
    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in);
        System.out.println("Enter Element");

        String x = myObj.nextLine();
        searchElement(args, x);
    }

    private static int searchElement(String[] args, String x) {
        for (int i = 0; i < args.length; i++) {
            if (args[i].equals(x)) {
                System.out.println("true");
            } else {
                System.out.println("false");
            }
        }
        return 0;
    }
}
