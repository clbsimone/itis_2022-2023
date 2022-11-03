public class Cerchio 
{
    private float raggio;
    private final float PI = 3.14f;

    public Cerchio()
    {
        raggio = 0;
    }
    
    public Cerchio(float raggio)
    {
        if(raggio >= 0)
        {
            this.raggio = raggio;
        }else 
            this.raggio = 0;
    }

    public void setRaggio(float raggio)
    {
        if(raggio >= 0)
        {
            this.raggio = raggio;
        } else 
            this.raggio = 0;
    }

    public float getArea()
    {
        return raggio * raggio * PI;
    }

    public float getCirconferenza()
    {
        return raggio * 2 * PI;
    }

    public String toString()
    {
        return "raggio: " + raggio;
    }
}
