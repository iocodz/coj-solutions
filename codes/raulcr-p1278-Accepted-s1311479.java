import java.util.*;

public class New {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int a, b, c, d, e, f;
        while (sc.hasNext()) {
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            d = sc.nextInt();
            e = sc.nextInt();
            f = sc.nextInt();

            
                if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)){
                    break;
                }
                
                int  [] g = {a, b, c, d, e, f};
                int mayor = -9999;
                int menor = 999999;
                for (int i = 0; i<6; i++){
                    if (g[i]>mayor) mayor = g[i];
                    if (g[i]<menor) menor = g[i];
                }
                double suma = 0;
                suma = a + b + c + d + e + f - mayor - menor;

                double prom = 0;
                prom = suma / 4;
                
                long penter = (long) prom;
                double pdecimal = prom - penter;
                
                if (pdecimal == 0) System.out.println(penter);
                
                else System.out.println(prom);
            
        }

        }
        
        
}
