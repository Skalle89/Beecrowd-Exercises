package beginner;

import java.io.IOException;
import java.util.*;

public class AreaOfACircle {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {

        double r = sc.nextDouble();
        System.out.printf("A=%.4f\n",3.14159*r*r);

    }

}