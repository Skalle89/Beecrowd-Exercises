package string;

import java.io.IOException;
import java.util.*;

public class Abracadabra {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);
        while(sc.hasNext()) {

            String word = sc.next();
            StringBuilder word2 = new StringBuilder(word);

            int len = word.length();

            for(int i = 0; i < len; i++){

                System.out.printf("%s"," ".repeat(i));

                for(int j = 0; j < word2.length()-1; j++){
                    System.out.printf("%c ",word2.charAt(j));
                }

                System.out.printf("%c\n",word2.charAt(word2.length()-1));

                word2.deleteCharAt(word2.length()-1);

            }

            System.out.println();

        }
    }

}

