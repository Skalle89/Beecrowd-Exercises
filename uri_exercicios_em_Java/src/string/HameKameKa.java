package URI.string;

import java.io.IOException;
import java.util.Scanner;
import java.util.Locale;

public class HameKameKa {

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        int ciclos = sc.nextInt();
        for(int i = 0; i < ciclos;i++){
            String pow  = sc.next();
            int s1 = 0;
            int s2 = 0;
            boolean ok = true;
            for(int j = 0;j < pow.length();j++){
                if(pow.charAt(j) == 'k'){
                    ok = false;
                }

                if(pow.charAt(j) == 'a' & ok){
                    s1 += 1;
                }else if (pow.charAt(j) == 'a' &  !ok){
                    s2 += 1;
                }
            }
            String end = "";
            for(int z = 0; z < s1*s2;z++){
                end +='a';
            }

            System.out.printf("k%s\n",end);

        }




        sc.close();


    }

}