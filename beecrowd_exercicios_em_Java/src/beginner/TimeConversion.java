package beginner;

import java.io.IOException;
import java.util.*;

public class TimeConversion {

    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        int time = sc.nextInt();

        System.out.printf("%d:%d:%d\n",time/3600,(time%3600)/60,time%3600%60);

    }

}