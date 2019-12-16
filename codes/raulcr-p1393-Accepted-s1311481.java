import java.util.Scanner;
import java.math.BigInteger;
import java.lang.*;
public class JavaApplication1 {

    public static void main(String[] args) {
        
     Scanner sc = new Scanner(System.in);
     
     String a = sc.next();
     
     BigInteger base = new BigInteger(a);
     
     int potencia = sc.nextInt();
         BigInteger res = new BigInteger("1");
         res = base.pow(potencia);

         String resultado = "";
         resultado += res;
         
         for (int j = 0; j < resultado.length(); j+=70){
         for(int i = j; i < j + 70 && i < resultado.length(); i ++){
             System.out.print(resultado.charAt(i));
         }
         System.out.println();
         }
        
      
    }
}
