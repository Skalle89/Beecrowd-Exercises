package beginner;

import java.io.IOException;
import java.util.*;

public class SimpleProduct {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        int x = sc.nextInt();
        int y = sc.nextInt();

        System.out.printf("PROD = %d\n",x*y);

    }

}