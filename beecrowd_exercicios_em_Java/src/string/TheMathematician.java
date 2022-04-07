package string;

import java.util.*;

public class TheMathematician {
    public static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        int rod = sc.nextInt();
        for (int j = 0; j < rod; j++) {
            String [] num = sc.next().split("x");
            for (int i = 5; i < 11; i++) {
                if(num[0].equals(num[1]))
                    System.out.printf("%d x %d = %d\n", Integer.parseInt(num[0]), i, Integer.parseInt(num[0]) * i);
                else
                    System.out.printf("%d x %d = %d && %d x %d = %d\n", Integer.parseInt(num[0]), i, Integer.parseInt(num[0]) * i, Integer.parseInt(num[1]), i, Integer.parseInt(num[1]) * i);
            }
        }
    }
}

