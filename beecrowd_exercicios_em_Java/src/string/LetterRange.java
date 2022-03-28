package string;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Locale;
import java.util.Scanner;

public class LetterRange {

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

    while (sc.hasNext()){
        int[] alpha = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        String inp = sc.nextLine();

        for (int i = 0; i < inp.length(); i++){
            if(inp.charAt(i) != ' '){
                alpha[(int)(inp.charAt(i))-(int) ('a')] ++;
            }
        }
        StringBuilder ord = new StringBuilder();
        ArrayList<StringBuilder> stor = new ArrayList<>();

        for(int i = 0; i < alpha.length ; i++){
            if(alpha[i] > 0 && ord.length() == 0){
                ord.append((char)((i)+(int)('a'))).append(":");
            }
            if(alpha[i] == 0 &&  ord.length() > 0) {
                ord.append((char)((i - 1)+(int)('a')));
                stor.add(ord);
                ord = new StringBuilder();
            }
            if(i == alpha.length-1 &&  ord.length() > 0) {
                ord.append((char)((i)+(int)('a')));
                stor.add(ord);
                ord = new StringBuilder();
            }
        }

        System.out.println(Arrays.toString(stor.toArray()).replaceAll("(\\[)|(])",""));
    }

    }

}
//TODO