package string;

import  java.util.*;

class ShortAttendance {
    private static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        int rod = sc.nextInt();
        for(int i = 0; i < rod ; i ++){
            int aluns = sc.nextInt();
            sc.nextLine();
            String [] alun = sc.nextLine().split(" ");
            String [] pres = sc.nextLine().split(" ");

            ArrayList<String> rep = new ArrayList<>();
            int comp = 0, m = 0;

            for (int j = 0 ;j < alun.length; j ++){

                for(int o = 0; o < pres[j].length(); o ++){
                    if(pres[j].charAt(o) == 'P')
                        comp ++;
                    if( pres[j].charAt(o) == 'M')
                        m++;

                }

                if (pres[j].length()-m > 0 && (double)(comp)/(double)(pres[j].length()-m) < 0.75)
                    rep.add(alun[j]);

                comp = 0; m = 0;

            }
            System.out.println(Arrays.toString(rep.toArray()).replaceAll("(\\[)|(])|(,)",""));
        }
    }
}