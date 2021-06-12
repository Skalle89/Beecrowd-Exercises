package string;

import java.util.*;

class GameOfPalindromes {
    public static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        while (sc.hasNextLine()){
            int need = -1;
            int [] arr = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

            String  word = sc.nextLine();

            for(int i = 0; i < word.length(); i++){
                arr[(int)(word.charAt(i))-(int)('a')] ++;
            }

            for(int i = 0; i < arr.length; i ++){

                need += arr[i]%2;

            }
            if(need < 0)
                need ++;

            System.out.println(need);
        }
    }
}