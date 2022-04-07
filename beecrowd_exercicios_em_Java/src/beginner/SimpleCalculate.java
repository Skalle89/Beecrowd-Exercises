package beginner;

import java.io.IOException;
import java.util.*;

public class SimpleCalculate {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {

        double total = 0;

        for(int i = 0; i < 2; i++){
            int a = sc.nextInt(), b = sc.nextInt(); double c = sc.nextDouble();
            total += b*c;
        }

        System.out.printf("VALOR A PAGAR: R$ %.2f\n",total);


    }

}