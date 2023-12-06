/*
La classe TELECOMANDO deve essere in grado di: accendere/spegnere la televisione, cambiare il canale (su di uno o
giù di uno) o impostare un canale (se esiste se no resta invariato), abbassare e alzare il volume o mettere a muto.
Usare gli attributi privati: canale, acceso, volume, VOLUME_MAX, CANALE_MAX
*/

public class Main {
    public static void main(String[] args)
    {
        Telecomando t;
        t = new Telecomando();

        t.setOnOff("on");

        System.out.println(t.getOnOff());

        t.setCanale("+");
        t.setCanale("+");
        t.setCanale("+");
        t.setCanale("+");
        t.setCanale("+");
        System.out.println(t.getCanale());

        t.setCanale(8);
        System.out.println(t.getCanale());

        t.setVolume("+");
        t.setVolume("+");
        System.out.println(t.getVolume());
    }
}
