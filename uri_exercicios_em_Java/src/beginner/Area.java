package beginner;

import java.io.IOException;
import java.util.*;

public class Area {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        double a = sc.nextDouble(),b = sc.nextDouble(),c = sc.nextDouble();

        System.out.printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f" +
                "\nQUADRADO: %.3f\nRETANGULO: %.3f\n",a*c/2,c*c*3.14159,(a+b)*c/2,b*b,a*b);
    }

}