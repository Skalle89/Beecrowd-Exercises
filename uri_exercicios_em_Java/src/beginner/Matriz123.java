package beginner;

import java.io.IOException;
import java.util.*;

public class Matriz123 {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);

        while(sc.hasNext()) {
            int n = sc.nextInt();
            int[][] mtz = new int[n][n];

            for (int i = 0; i < n; i++) {
                for(int j = 0; j < n ; j++){
                    mtz[i][j] = 3;
                }
            }

            for (int i = 0; i < n; i++) {
               mtz [i][i] = 1;
               mtz [i][n-1-i] = 2;
            }

            for (int i = 0; i < n; i++) {
                for(int j = 0; j < n ; j++){
                    System.out.printf("%d",mtz[i][j]);
                }
                System.out.println();
            }
        }

    }

}