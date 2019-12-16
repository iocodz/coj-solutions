import java.util.Scanner;

public class JavaApplication1 {
      
        static int []array = new int [100005];
        
        
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int i = 1; i <= 100000; i ++ ){
            array[i] = i;
        }
       
        int casos = sc.nextInt();
        for (int i = 0; i < casos; i ++){
        int posx = sc.nextInt();
        int posy = sc.nextInt();
        
        if (coordenadas(posx, posy) == -1) System.out.println("No Number");
        else System.out.println(coordenadas(posx, posy));
        
        }
    }
    
    public static int coordenadas (int posx, int posy){
        
        if (posx == 0 && posy == 0) return 0;
       
        if (posx == 1){
            if (posy == 1)
            return 1;
            else return -1;
        }
        if ( posy == 1){ 
                if (posx == 3) return 3;
                else if (posx == 1) return 1;
                else return -1;
        }
        if (posx % 2 == 0 && posy % 2 !=0) return -1;
         if (posx % 2 != 0 && posy % 2 ==0) return -1;
         
         if ((posy > posx) || (posy < posx - 2)) return -1;
        if (posx == posy){
            if (posx % 2 == 0){
            return 2*array[posx];
            } else return 2*array[posx] - 1;
        }
        else {
            if (posx % 2 == 0) return array[posx] + array[posx - 2];
            else return array[posx] + array[posx - 2] - 1;
            
        }
        
        
    }
    
}