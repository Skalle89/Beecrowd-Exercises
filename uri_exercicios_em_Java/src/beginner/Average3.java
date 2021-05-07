package beginner;

import java.io.IOException;
import java.util.*;

public class Average3 {
    static Scanner sc = new Scanner(System.in);

    public static void Media3(float n, float m, float o, float p){
        float media = (n*2 + m*3 + o*4 + p)/10;

        System.out.printf("Media: %.1f\n",media);

        if(media > 6.9) {
            System.out.println("Aluno aprovado.");
            return;
        }

        if(media < 5.0) {
            System.out.println("Aluno reprovado.");
            return;
        }

        System.out.println("Aluno em exame.");

        float q = sc.nextFloat();

        System.out.printf("Nota do exame: %.1f\n",q);

        if((media+q)/2 > 4.9){
            System.out.println("Aluno aprovado.");
        }
        else {
            System.out.println("Aluno reprovado.");
        }

        System.out.printf("Media final: %.1f\n",(media+q)/2);

    }

    public static void main(String[] args) throws IOException {

        Locale.setDefault(Locale.US);

        float n = sc.nextFloat(),m = sc.nextFloat(),o = sc.nextFloat(),p = sc.nextFloat();

        Media3(n,m,o,p);

    }

}