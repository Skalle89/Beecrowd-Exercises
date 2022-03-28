package beginner;

import java.io.IOException;
import java.util.*;

public class Salary {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {

        int a = sc.nextInt(), b = sc.nextInt(); double c = sc.nextDouble();

        System.out.printf("NUMBER = %d\nSALARY = U$ %.2f\n",a,b*c);
    }

}