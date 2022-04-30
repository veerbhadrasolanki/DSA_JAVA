import java.util.Scanner;

public class insert {
    public static void main(String[] args) {
        int n, i;
        Scanner myObj = new Scanner(System.in);
        n = myObj.nextInt();
        int[] array = new int[n];
        for (i = 0; i < n; i++) {
            int c = myObj.nextInt();
            if (c != 0) {
                array[i] = c;
            } else {
                array[i] = 0;
                break;
            }
        }
        System.out.println("Enter Element");

        int ele = myObj.nextInt();
        int pos = myObj.nextInt();
        int cap = 2;
        insertElement(array, ele, pos, cap);
    }

    private static void insertElement(int[] array, int ele, int pos, int cap) {
        int len = array.length;
        if (cap != 0) {
            while (pos < len) {
                array[len++] = array[len];
                len--;
            }
            array[pos] = ele;
        } else {
            System.out.println("Not Have Capacity");
        }
    }
}
