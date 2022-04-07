package beginner;

import java.io.IOException;
import java.util.*;

public class Difference {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        int a = sc.nextInt(),b = sc.nextInt(),c = sc.nextInt(),d = sc.nextInt();

        System.out.printf("DIFERENCA = %d\n",a*b - c*d);

    }

}