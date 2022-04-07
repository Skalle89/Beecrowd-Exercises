package beginner;

import java.io.IOException;
import java.util.*;

public class SelectionTest1 {
    static Scanner sc = new Scanner(System.in);

    public static void teste(int a, int b , int c, int d){
        if(b > c && d > a && c+d > a+b && c > 0 && d > 0 && a % 2 == 0 ){
            System.out.println("Valores aceitos");
            return;
        }
        System.out.println("Valores nao aceitos");
    }

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);

        int a = sc.nextInt(),b = sc.nextInt(),c = sc.nextInt(), d = sc.nextInt();

        teste(a,b,c,d);

    }

}