package beginner;

import java.io.IOException;
import java.util.*;

public class idades {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);
        int n = sc.nextInt(),q = 0;
        double med = 0;

        while(n > -1){
            med += n;
            q++;
            n = sc.nextInt();
        }

        System.out.printf("%.2f\n",med/q);

    }

}