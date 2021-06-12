package string;

import java.util.*;

class LED {
    public static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        int rod = sc.nextInt();

        for(int i = 0; i < rod ; i++){
            int tot = 0;
            String led = sc.next();
            for(int j = 0; j < led.length();j++){
                if (led.charAt(j) == '2' || led.charAt(j) == '3' || led.charAt(j) == '5')
                    tot += 5;
                else if (led.charAt(j) == '6' || led.charAt(j) == '9' || led.charAt(j) == '0')
                    tot += 6;
                else if (led.charAt(j) == '4')
                    tot += 4;
                else if (led.charAt(j) == '1')
                    tot += 2;
                else if (led.charAt(j) == '7')
                    tot += 3;
                else
                    tot += 7;
            }
            System.out.printf("%d leds\n",tot);
        }
    }
}