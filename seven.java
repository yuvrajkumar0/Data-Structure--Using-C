import java.util.Scanner;

public class seven {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int[] a = {10, 20, 30, 40, 50};
        int n = a.length;

        System.out.println("Original array:");
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }

        System.out.print("\nEnter position to delete (1 to " + n + "): ");
        int pos = sc.nextInt();

        if (pos < 1 || pos > n) {
            System.out.println("Invalid position");
        } else {

            
            for (int i = pos - 1; i < n - 1; i++) {
                a[i] = a[i + 1];
            }

            n--;

            System.out.println("Array after deletion:");
            for (int i = 0; i < n; i++) {
                System.out.print(a[i] + " ");
            }
        }

       
    }
}