import java.util.Scanner;

public class Main {

    static Num ptr, trie;

    public static class Num {

        private boolean b;
        private final Num[] hijos;

        public Num() {
            this.b = false;
            this.hijos = new Num[26];
            for (int i = 0; i < 26; i++) {
                hijos[i] = null;
            }
        }
    }

    public static void insertar(String word) {
        ptr = trie;
        int len = word.length(), p;
        for (int i = 0; i < len; i++) {
            p = word.charAt(i) - 'a';
            if (ptr.hijos[p] == null) {
                ptr.hijos[p] = new Num();
            }

            ptr = ptr.hijos[p];
        }
        ptr.b = true;
    }

    public static int Buscar(String word) {
        int sol = 0;
        ptr = trie;
        int len = word.length(), p;
        for (int i = 0; i < len; i++) {
            int cont = 0;
            p = word.charAt(i) - 'a';
            for (int j = 0; j < 26; j++) {
                if (ptr.hijos[j] != null) {
                    cont++;
                }
            }
            if (cont > 1 || ptr.b) {
                sol++;
            }
            ptr = ptr.hijos[p];
        }
        return sol;
    }

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        while (cin.hasNext()) {
            trie = new Num();
            trie.b = true;
            int n = cin.nextInt();
            String[] lista = new String[n];
            for (int i = 0; i < n; i++) {
                String a = cin.next();//leer string
                lista[i] = a;
                insertar(a);
            }

            double sol = 0;
            for (int i = 0; i < n; i++) {
                sol += Buscar(lista[i]);
            }
            sol /= n;
            System.out.printf("%.2f\n", sol);
        }
    }

}