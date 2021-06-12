package adhoc;

import java.util.Scanner;

class TurnLeft{
    public static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        int ord = sc.nextInt();
        while (ord != 0){
            String [] sen = {"S","O","N","L"};
            String pos = sc.next();
            int init = 2;
            for (int i = 0; i < pos.length(); i ++){

                if(pos.charAt(i) == 'D') {
                    init++;
                    if (init > 3)
                        init = 0;
                }
                else{
                    init--;
                    if (init < 0)
                        init = 3;
                }
            }
            System.out.println(sen[init]);
            ord = sc.nextInt();
        }
    }
}