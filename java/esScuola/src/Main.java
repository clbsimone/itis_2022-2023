import java.util.Arrays;

/*
Una scuola è composta da N classi. Per ogni classe, il numero di studenti è generato in modo casuale (tra 15 e 30).
Calcolare quanti frequentano la scuola e in media quanti studenti ci sono per classe, il numero minimo e il numero
massimo.
*/

public class Main {
    public static void main(String[] args) {
        Scuola s;
        s = new Scuola(4);

        System.out.println(Arrays.toString(s.getClassi()));
        System.out.println(s.toString());
    }
}
