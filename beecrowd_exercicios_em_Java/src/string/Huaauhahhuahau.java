package URI.string;

import java.io.IOException;
import java.util.Scanner;
import java.util.Locale;

public class Huaauhahhuahau {

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        String ris = sc.next(),rslt = "",rvs="";
        for(int i = 0; i < ris.length();i++){
            if (ris.charAt(i)=='a'|ris.charAt(i)=='e'|ris.charAt(i)=='i'|ris.charAt(i)=='o'|ris.charAt(i)=='u')
            rslt += ris.charAt(i);
        }
        for(int i = rslt.length()-1; i > -1;i--){
            rvs += rslt.charAt(i);
        }
        System.out.println(rslt.equals(rvs) ? 'S':'N');

        sc.close();


    }

}