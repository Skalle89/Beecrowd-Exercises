package beginner;

import java.io.IOException;
import java.util.*;

public class BaskharasFormula {
    static Scanner sc = new Scanner(System.in).useLocale(Locale.US);


    public static void baskhara(double a,double b,double c){

        double delta = b*b - 4*a*c;

        if(a == 0 || delta < 0){
            System.out.println("Impossivel calcular");
            return;
        }
        System.out.printf("R1 = %.5f\nR2 = %.5f\n",(-b + Math.sqrt(delta))/(2*a),(-b - Math.sqrt(delta))/(2*a));
    }

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);

        double a = sc.nextDouble(),b = sc.nextDouble(),c = sc.nextDouble();

        baskhara(a,b,c);

    }

}