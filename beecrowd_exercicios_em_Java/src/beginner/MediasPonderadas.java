package beginner;

import java.io.IOException;
import java.util.*;

public class MediasPonderadas {
    static Scanner sc = new Scanner(System.in);

    public static void media_ponderada(int n){

        for(int i = 0;i < n ; i ++) {

            double a = sc.nextDouble(), b = sc.nextDouble(), c = sc.nextDouble();
            System.out.printf("%.1f\n", (a * 2 + b * 3 + c * 5) / 10);
        }
    }

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);

        int n = sc.nextInt();

        media_ponderada(n);

    }

}