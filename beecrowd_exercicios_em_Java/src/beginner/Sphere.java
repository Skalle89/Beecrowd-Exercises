package beginner;

import java.io.IOException;
import java.util.*;
import java.math.*;

public class Sphere {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        double r = sc.nextDouble();

        System.out.printf("VOLUME = %.3f\n",Math.pow(r,3)*3.14159*4/3);

    }

}