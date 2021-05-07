package beginner;

import java.io.IOException;
import java.util.*;

public class Banknotes {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {

        int money = sc.nextInt();

        int [] vals = {100,50,20,10,5,2,1};

        System.out.printf("%d\n",money);

        for(int teucu : vals){
            System.out.printf("%d nota(s) de R$ %d,00\n",money/teucu,teucu);
            money %= teucu;

        }

    }

}