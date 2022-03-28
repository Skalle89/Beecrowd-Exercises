package string;

import java.io.IOException;
import java.util.Arrays;
import java.util.Locale;
import java.util.Scanner;

public class TheGame {

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        int rod = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < rod; i++) {
            String [] game = sc.nextLine().toLowerCase().replaceAll("(,)|(\\.)", "").split(" ");
            int sec = 0,maior = 0;
            for (int j = 0; j < game.length; j++){
                sec += game[j].length();
                if(game[j].equals("jogo") || game[j].equals("perdi")){
                    if (sec > maior) {
                        maior = sec;
                        sec = 0;
                    }
                }

            }
            System.out.println(maior);



        }

        sc.close();

    }
}

 //TODO