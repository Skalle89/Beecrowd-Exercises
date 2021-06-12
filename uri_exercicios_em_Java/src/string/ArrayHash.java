package URI.string;

import java.io.IOException;
import java.util.Scanner;
import java.util.Locale;

public class ArrayHash {

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        int o = sc.nextInt();
        for(int z = 0; z < o;z++) {
            int sum = 0;
            int n = sc.nextInt();
            sc.nextLine();
            for (int i = 0; i < n; i++) {
                String m = sc.nextLine();
                for (int j = 0; j < m.length(); j++) {
                    sum += (int) m.charAt(j) - (int) 'A' + j + i;
                }

            }
            System.out.println(sum);

        }
        sc.close();

    }

}