package beginner;

import java.io.IOException;
import java.util.*;

public class CoordinatesOfAPoint {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);

        float x = sc.nextFloat(), y = sc.nextFloat();


        if(x == 0 || y == 0){

            if(y != 0) System.out.println("Eixo Y");

            else if (x != 0) System.out.println("Eixo X");

            else System.out.println("Origem");

        }

        else{
            if(x > 0){
                if(y > 0) System.out.println("Q1");
                else System.out.println("Q4");
            }
            else{
                if(y > 0) System.out.println("Q2");
                else System.out.println("Q3");
            }
        }


    }

}