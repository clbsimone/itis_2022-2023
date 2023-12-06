/*
Data una sequenza di stringhe con il seguente formato cognome*nome*eta*sesso, che termina con l'introduzione
della parola fine, visualizzare per ogni stringa introdotta il cognome in maiuscolo e il nome con l'iniziale maiuscola.
Al termine degli inserimenti calcolare l'età media delle donne e degli uomini. (Usare i metodi della classe String:
toUpperCase, indexOf, substring, concat,...)
*/

public class Main {
    public static void main(String[] args) {
        Dati d, d1;

        d = new Dati("basso-simone-18-M");
        System.out.println(d.toString());

        d1 = new Dati("bruno-samuele-36-M");
        System.out.println(d1.toString());

        System.out.println(d.printMedie());
    }
}
