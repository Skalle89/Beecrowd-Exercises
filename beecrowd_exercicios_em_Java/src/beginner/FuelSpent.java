package beginner;

import java.io.IOException;
import java.util.*;

public class FuelSpent {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        int time = sc.nextInt();
        int avgSpeed = sc.nextInt();

        System.out.printf("%.3f\n",1.0/12*avgSpeed*time);

    }

}