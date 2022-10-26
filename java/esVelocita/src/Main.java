public class Main {
    public static void main(String[] args) {
        Velocita vkmh;
        vkmh = new Velocita();

        vkmh.setVelocitaKmh(10);
        System.out.println("vKm/h " + vkmh.getVelocitaKmh());

        vkmh.steVelocitaMs(12);
        System.out.println("vM/s: " + vkmh.getVelocitaMs());
    }
}
