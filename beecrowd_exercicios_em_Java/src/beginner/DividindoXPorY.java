package beginner;

import java.io.IOException;
import java.util.*;

public class DividindoXPorY {
    static Scanner sc = new Scanner(System.in);

    public static void divisao(int x, int y){
        if(y == 0){
            System.out.println("divisao impossivel");
            return;
        }
        System.out.printf("%.1f\n",x/(y*1.0));
    }

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);

        int n = sc.nextInt();

        for(int i =0; i < n; i ++) {
            int x = sc.nextInt(), y = sc.nextInt();
            divisao(x,y);
        }

    }

}