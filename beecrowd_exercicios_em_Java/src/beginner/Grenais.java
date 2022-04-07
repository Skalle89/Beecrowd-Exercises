package beginner;

import java.io.IOException;
import java.util.*;

public class Grenais {
    static Scanner sc = new Scanner(System.in);

    public static void grenais(){
        int resp = 1,in = 0, gre = 0,emp = 0,total = 0;

        do{
            int x = sc.nextInt(),y = sc.nextInt();
            total ++;

            if (x > y) in ++;
            else{
                if (x < y) gre++;
                else emp++;
            }

            System.out.println("Novo grenal (1-sim 2-nao)");
            resp = sc.nextInt();

        }while (resp == 1);

        System.out.printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n" +
        "%s venceu mais\n",total, in, gre,emp,(in > gre ? "Inter": in < gre ? "Gremio" : "Nao houve vencedor"));

    }

    public static void main(String[] args) throws IOException {

        Locale.setDefault(Locale.US);

        grenais();

    }

}