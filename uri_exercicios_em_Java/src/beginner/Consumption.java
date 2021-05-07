package beginner;

import java.io.IOException;
import java.util.*;

public class Consumption {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        int x = sc.nextInt(); double y = sc.nextDouble();

        System.out.printf("%.3f km/l\n",x*(1/y));


    }

}