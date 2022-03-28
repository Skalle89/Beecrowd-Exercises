package string;
import java.util.*;

public class CountingCharacters {

    public static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        String bigWord = "";
        int maior = 0;
        String frase = sc.nextLine();
        List cyp = new ArrayList<StringBuilder>();
        while(!frase.equals("0")){
            String [] frase2 = frase.split(" ");
            StringBuilder trad = new StringBuilder();
            for(String p:frase2){
                if(maior <= p.length()){
                    maior = p.length();
                    bigWord = p;
                }
                trad.append(p.length()).append("-");
            }
            cyp.add(trad.substring(0,trad.length()-1));
            frase = sc.nextLine();
        }
        for (Object j : cyp){
            System.out.println(j);
        }
        System.out.printf("\nThe biggest word: %s\n",bigWord);
    }
}
