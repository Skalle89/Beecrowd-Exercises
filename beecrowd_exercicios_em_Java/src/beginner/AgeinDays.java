package beginner;

import java.io.IOException;
import java.util.*;

public class AgeinDays {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        int days = sc.nextInt();

        System.out.printf("%d ano(s)\n%d mes(es)\n%d dias(s)\n",days/365,(days%365)/30,days%365%30);

    }

}