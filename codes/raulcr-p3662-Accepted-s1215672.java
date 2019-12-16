
import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int b;
        do {
            b = sc.nextInt();
            if (b == -1) {
                break;
            }
            int suma = 0;
            for (int i = 1; i < b; i++) {
                if (b % i == 0) {
                    suma += i;
                }
            }
            if (suma == b) {
                System.out.print(b + " = ");
                for (int i = 1; i < b; i++) {
                    if (b % i == 0) {

                        System.out.print(i);
                        if (i < b / 2) {
                            System.out.print(" + ");
                        }
                    }
                }
                System.out.print("\n");
            } else {
                System.out.println(b + " is NOT perfect.");
            }
        } while (b != -1);
    }
}
