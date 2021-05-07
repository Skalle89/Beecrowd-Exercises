package beginner;

import java.io.IOException;
import java.util.*;
import java.util.HashMap;

public class Snack {
    static Scanner sc = new Scanner(System.in);

    public static HashMap <Integer, Double> CriarHashMap(){

        HashMap<Integer,Double> lanches = new HashMap<>();

        double [] arr = {4, 4.5, 5, 2, 1.5};

        for(int i = 1; i < 6; i ++){
            lanches.put(i,arr[i-1]);
        }

        return lanches;
    }


    public static void main(String[] args) throws IOException {

        Locale.setDefault(Locale.US);

        HashMap<Integer,Double> lanches = CriarHashMap();

        int x = sc.nextInt(), y = sc.nextInt();

        System.out.printf("Total: R$ %.2f\n",lanches.get(x)*y);

    }

}