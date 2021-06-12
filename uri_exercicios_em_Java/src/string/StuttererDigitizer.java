package URI.string;

import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;
import java.util.Locale;

public class StuttererDigitizer {

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        String[] frase = sc.nextLine().split(" ");
        for(int i = 0; i < frase.length;i++){

            if(frase[i].length() > 3){

                if (frase[i].toLowerCase().substring(0, 2).equals(frase[i].toLowerCase().substring(2, 4))){
                    frase[i] = frase[i].substring(0,2) + frase[i].substring(4,frase[i].length());
            }

            }
        }

        System.out.println(Arrays.toString(frase).replaceAll("[,\\[\\]]",""));
        sc.close();


    }

}

//TODO