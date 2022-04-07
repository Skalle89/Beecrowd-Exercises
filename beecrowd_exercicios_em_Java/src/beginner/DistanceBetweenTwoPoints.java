package beginner;
import java.util.*;
import java.math.*;

public class DistanceBetweenTwoPoints {
    public static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        double [] arr = new double[4];

        for(int i = 0; i < 4; i++){
            arr[i] = sc.nextDouble();
        }

        System.out.printf("%.4f\n",Math.pow(Math.pow(arr[0]-arr[2],2)+Math.pow(arr[1] - arr[3],2),0.5));


    }

}
