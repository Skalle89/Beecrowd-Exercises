package beginner;

import java.io.IOException;
import java.util.*;


public class BanknotesAndCoins {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);
        double money = sc.nextDouble();

        int money_notas = (int) money;
        int money_moedas = Integer.parseInt(String.valueOf(money).substring(String.valueOf(money).indexOf('.')+1));

        int [] notas = {100,50,20,10,5,2};
        int [] moedas = {100,50,25,10,5,1};

        System.out.print("NOTAS:\n");
        for(int n : notas){
            System.out.printf("%d nota(s) de R$ %d.00\n",money_notas/n,n);
            money_notas %= n;
        }

        money_moedas += money_notas*100;


        System.out.print("MOEDAS:\n");
        for(int n : moedas){
            System.out.printf("%d moeda(s) de R$ %.2f\n",money_moedas/n,n*1.0/100);
            money_moedas %= n;
        }


    }

}