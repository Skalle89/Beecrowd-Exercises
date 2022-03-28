package beginner;

import java.io.IOException;
import java.util.*;
import java.math.*;

public class TheGreatest {
    static Scanner sc = new Scanner(System.in);

    public static int OMaior(int a, int b){
        return (a + b + Math.abs(a-b))/2;
    }

    public static void main(String[] args) throws IOException {

        int a = sc.nextInt(),b = sc.nextInt(), c = sc.nextInt();

        System.out.printf("%d eh o maior\n",OMaior(OMaior(a,b),c));


    }

}