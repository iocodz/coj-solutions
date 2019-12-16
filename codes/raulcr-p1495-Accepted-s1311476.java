import java.util.Arrays;
import java.util.Scanner;


public class Main {
    public static void SelectionSort(Comparable[] array){
        for (int i = 0; i <=array.length - 1; i ++ ){
            for (int j = i + 1; j <= array.length - 1; j ++){
                if (array[j].compareTo(array [i]) < 0){
                   Comparable aux = array[i];
                   array[i] = array[j];
                   array[j] = aux;
                }
            }
        }
    } 
    
    public static void BubbleSort(Comparable[] array){
        for (int i = 0; i < array.length - 1; i++){
            for (int j = 0; j <array.length -1 - i; j ++){
                if (array[j].compareTo(array[j + 1]) > 0){
                   Comparable aux = array[j];
                   array[j] = array[j + 1];
                   array[j + 1] = aux;
                }
            }
        }
    }
    
    public static void InsertionSort(Comparable[] array){
        for (int i = 0; i < array.length; i ++){
            Comparable aux = array[i];
            int j = i;
            while(j > 0 && aux.compareTo(array[j - 1])< 0){
                array[j] = array[j - 1];
                j = j - 1;
                array[j] = aux;
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int N = scanner.nextInt();
        Integer[] array = new Integer[N];
        for (int i = 0; i < N; i++)
            array[i] = scanner.nextInt();
                
        InsertionSort(array);
        for(int i = 0; i < N; i++)
            System.out.println(array[i]); 
    }
}
