package beginner;

import java.io.IOException;
import java.util.*;
import java.util.HashMap;

public class Interval {
    static Scanner sc = new Scanner(System.in);

    public static void ChecarIntervalo(double val, HashMap <Integer [], String> inter){

        if(val == 0){
            System.out.println("Intervalo [0,25]");
            return;
        }

        for(Integer [] x: inter.keySet()){

            if (val != 0 && val > x[0] && val <= x[1]){
                System.out.println(inter.get(x));
                return;
            }
//            if ( val == 0){
//                System.out.println(inter.get(x));
//                return;
//            }
        }

        System.out.println("Fora de intervalo");
    }

    public static HashMap <Integer [], String> CriarHashMap(){

        HashMap <Integer [], String>  inter = new HashMap<>();

//        inter.put(new Integer[]{0, 25}, "Intervalo ["+ 0 +","+ 25 + "]");

        for(int i = 25; i < 76; i+= 25){
            inter.put(new Integer []{i , i + 25}, "Intervalo ("+ i +","+ (i + 25) + "]");
        }

        return inter;
    }

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);

        double val = sc.nextDouble();

        HashMap <Integer [], String>  inter = CriarHashMap();

        ChecarIntervalo(val, inter);
    }

}