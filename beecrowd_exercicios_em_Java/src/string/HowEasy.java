package URI.string;

import java.io.IOException;
import java.util.Scanner;
import java.util.Locale;

public class HowEasy {

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            String [] frase = sc.nextLine().split(" ");
            int tot = 0,wor = 0, n = 0;

            for(String word : frase){
                n +=1;
                for(int i = 0; i < word.length();i++){

                    if((word.charAt(i) != '.') & !Character.isDigit(word.charAt(i)) ){
                        wor += 1;
                    }else{
                        wor = 0;
                        n --;
                        break;

                    }
                }

                tot += wor;
                wor = 0;
            }

            if (n == 0){
                System.out.println(250);
            }else if(tot/n <= 3){
                System.out.println(250);
            }else if (tot/n == 4 | tot/n == 5){
                System.out.println(500);
            }else{
                System.out.println(1000);
            }


        }
        sc.close();


    }

}

//TODO