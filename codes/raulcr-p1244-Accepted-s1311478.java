import java.util.Scanner;

public class JavaApplication18 {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner (System.in);
        
        
        String a = sc.nextLine();
        
        while(!a.equals("*")){
            
            
        char b = a.charAt(0);
      
        
        String aux = "";
        
        aux += b;
        
        for (int i = 1; i < a.length(); i ++){
            if (a.charAt(i) == ' ') aux += a.charAt(i + 1);
        }
        
       
            
        boolean bandera = true;
        
       
       String h = alfabeto(b);
       char e = h.charAt(0);
       char r = h.charAt(1);
       
       for (int i = 0; i < aux.length(); i ++){
           if (aux.charAt(i) != e)
               if (aux.charAt(i) != r) bandera = false;
       }
       
       if (bandera == true) System.out.println("Y");
       if (bandera == false)System.out.println("N");
        
       a = sc.nextLine();
       if (a.equals("*")) break;
        }
      
    }
    
    public static String alfabeto(char a){
        char [] b = new char[27];
        b[0]  = 'A';
        b[1]  = 'B';
        b[2]  = 'C';
        b[3]  = 'D';
        b[4]  = 'E';
        b[5]  = 'F';
        b[6]  = 'G';
        b[7]  = 'H';
        b[8]  = 'I';
        b[9]  = 'J';
        b[10]  = 'K';
        b[11]  = 'L';
        b[12]  = 'M';
        b[13]  = 'N';
        b[14]  = 'O';
        b[15]  = 'P';
        b[16]  = 'Q';
        b[17]  = 'R';
        b[18]  = 'S';
        b[19]  = 'T';
        b[20]  = 'U';
        b[21]  = 'V';
        b[22]  = 'W';
        b[23]  = 'X';
        b[24]  = 'Y';
        b[25]  = 'Z';
        
        char [] c = new char[27];
        c[0]  = 'a';
        c[1]  = 'b';
        c[2]  = 'c';
        c[3]  = 'd';
        c[4]  = 'e';
        c[5]  = 'f';
        c[6]  = 'g';
        c[7]  = 'h';
        c[8]  = 'i';
        c[9]  = 'j';
        c[10]  = 'k';
        c[11]  = 'l';
        c[12]  = 'm';
        c[13]  = 'n';
        c[14]  = 'o';
        c[15]  = 'p';
        c[16]  = 'q';
        c[17]  = 'r';
        c[18]  = 's';
        c[19]  = 't';
        c[20]  = 'u';
        c[21]  = 'v';
        c[22]  = 'w';
        c[23]  = 'x';
        c[24]  = 'y';
        c[25]  = 'z';
        
        int pos = -1;
        for (int i = 0; i < b.length; i++){
            if (a == b[i]) pos = i;
        }
         for (int i = 0; i < c.length; i++){
            if (a == c[i]) pos = i;
        }
        
        String d = "";
        d += b [pos];
        d += c[pos];
        
        return d;
    }
    
}
