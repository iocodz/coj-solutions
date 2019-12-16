
import java.util.*;
public class JavaApplication18 {

 
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n,q,a,b;
        int casos = sc.nextInt();
        for (int i = 0; i < casos; i++) {
            n=sc.nextInt();
            q=sc.nextInt();
            long [] arr = new long [n+1];
            arr[0]=0;
            for (int j = 1; j <= n; j++) {
                arr[j]=arr[j-1]+sc.nextLong();
            }
            for (int j = 0; j < q; j++) {
                a=sc.nextInt();
                b=sc.nextInt();
                System.out.println(arr[b + 1] - arr[a]);
            }
            if(i!=casos-1)System.out.println();
        }
    }
}