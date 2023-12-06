/*
    La classe Cerchio deve avere due costruttori: uno senza parametri che imposta il raggio a 0 e uno con un parametro
    corrispondente al raggio che si vuole impostare. Deve fornire oltre ai metodi get/set opportuni anche i metodi
    getArea() e getCirconferenza(). Creare la classe Test che prova a creare 2 cerchi, uno con il costruttore senza
    parametri e poi usa il metodo setRaggio() e l'altro con il costruttore con un parametro. Quindi visualizzare la loro
    area e la loro circonferenza.
 */

public class Main 
{
    public static void main(String[] args) 
    {
        Cerchio c1, c2;

        c1 = new Cerchio();
        
        c1.setRaggio(5);
        System.out.println(c1.toString());
        System.out.println("area: " + c1.getArea());
        System.out.println("circonferenza: " + c1.getCirconferenza());

        System.out.println();

        c2 = new Cerchio(10);
        System.out.println(c2.toString());
    }
}
