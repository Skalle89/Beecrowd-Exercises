package beginner;

import java.io.IOException;
import java.util.*;

public class AsAbasDePericles {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);
        int n = sc.nextInt(), m = sc.nextInt();

        for(int i = 0; i < m; i ++){
            String acao = sc.next();

            if (acao.equals("fechou")) n++;
            if (acao.equals("clicou")) n--;

        }

        System.out.println(n);

    }

}