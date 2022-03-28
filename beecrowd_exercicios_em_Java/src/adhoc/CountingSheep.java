package adhoc;

import java.util.*;

class CountingSheep {
    public static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        int rod = sc.nextInt();
        for(int i = 0; i < rod;i++){
            int nsheep = sc.nextInt();
            sc.nextLine();
            String[] line = sc.nextLine().split(" ");
            Set<String> sheeps = new HashSet<>(Arrays.asList(line));
            System.out.println(sheeps.size());

        }



    }
}