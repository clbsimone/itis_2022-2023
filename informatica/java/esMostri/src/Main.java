public class Main {

    // psvm = void main
    public static void main(String[] args) {
        Mostro mioMostro, tuoMostro, loroMstro;
        mioMostro = new Mostro("simone", 99, 5);

        /*
        mioMostro.setNome("simone");
        mioMostro.setVita(99);
        mioMostro.setForza(5);
        */

        System.out.println("Hello world!"); // sout = stampa, se alla fine del metodo c'è ln va a caopo
        // System.out.println(mioMostro); // stampa mostro @ (at) indirizzo
        // System.out.println(mioMostro.nome); // stampa il nome del mostro
        System.out.println(mioMostro);

        mioMostro.setVita(mioMostro.getVita() + 1);
        System.out.println("vita + 1 = " + mioMostro.getVita()); // stampa la vita del nome

        mioMostro.setVita(mioMostro.getVita() + 1);
        System.out.println("vita + 2 = " + mioMostro.getVita()); // stampa la vita del nome

        mioMostro.incrementoForza();
        System.out.println("forza = " + mioMostro.getForza());

        mioMostro.incrementoForza(2);
        System.out.println(mioMostro.getForza());

        tuoMostro = new Mostro("samuele", 50, 9);
        System.out.println(tuoMostro);

        loroMstro = new Mostro("emma");
        System.out.println(loroMstro);
    }
}
