package beginner;

import java.io.IOException;
import java.util.*;

public class Average1 {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        double x = sc.nextDouble();
        double y = sc.nextDouble();

        System.out.printf("MEDIA = %.5f\n",(x*3.5+y*7.5)/11);


    }

}