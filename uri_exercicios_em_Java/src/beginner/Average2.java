package beginner;

import java.io.IOException;
import java.util.*;

public class Average2 {

    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
            double a = sc.nextDouble(), b = sc.nextDouble(), c = sc.nextDouble();

            System.out.printf("MEDIA = %.1f\n",(a*2+b*3+c*5)/10);

    }

}