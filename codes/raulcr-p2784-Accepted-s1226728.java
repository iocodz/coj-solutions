//Javier01

import java.util.Scanner;

public class COJ {

    
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int cant=sc.nextInt();
        int [] f = new int[cant];
        for (int i = 0; i < cant; i++) {
            f[i]=sc.nextInt();
        }
        for(int i=0;i<cant-1;i++){
	    for(int j=0;j<cant-i-1;j++){
		if(f[j]>f[j+1]){
		int aux=f[j];
		f[j]=f[j+1];
		f[j+1]=aux;
		}
	    }
	}
        
        System.out.print(f[cant-1]);
        for (int i = 0; i < cant-1; i++) {
            System.out.print(" " + f[i]);
        }
    }
    
}