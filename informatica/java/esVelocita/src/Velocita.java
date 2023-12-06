public class Velocita {
    private int velkmh;

    public void setVelocitaKmh(int velkmh)
    {
        if (velkmh > 0)
            this.velkmh = velkmh;
        else
            this.velkmh = 0;
    }

    public int getVelocitaKmh()
    {
        return velkmh;
    }

    public void steVelocitaMs(int velkmh)
    {
        if (velkmh > 0)
            this.velkmh = velkmh * 10 * 10 * 10;
        else
            this.velkmh = 0;
    }

    public int getVelocitaMs()
    {
        return  velkmh;
    }
}
