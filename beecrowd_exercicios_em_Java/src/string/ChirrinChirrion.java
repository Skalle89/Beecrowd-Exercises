package string;

import java.util.*;

public class ChirrinChirrion {
    public static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int rod = sc.nextInt();
        for (int i = 0; i < rod; i++){
            int stuff = sc.nextInt();
            sc.nextLine();
            ArrayList<String> list = new ArrayList<>();
            for (int j = 0; j < stuff;j++){
                String [] magic = sc.nextLine().split(" ");
                if(magic[1].equals("chirrin") && !list.contains(magic[0])){
                    list.add(magic[0]);
                }
                else if (magic[1].equals("chirrion")){
                    list.remove(magic[0]);
                }

            }
            Collections.sort(list);
            System.out.println("TOTAL");
            for (int z = 0; z < list.size(); z++){
                System.out.println(list.get(z));


            }

        }


    }
}
