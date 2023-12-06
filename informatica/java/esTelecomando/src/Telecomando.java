 public class Telecomando {
    private int canale = 1;
    private int volume = 1;
    private String on_off;
    private final int VOLUME_MAX = 5;
    private final int CANALE_MAX = 10;

    public void setOnOff(String on_off)
    {
        this.on_off = on_off;
    }

    public boolean isOnOff()
    {
        if(on_off == "on")
            return true;
        else if (on_off == "off")
            return false;

        return false;
    }

    public String getOnOff()
    {
        if(isOnOff())
            return "tv ON";
        else
            return "tv OFF";
    }

    public void setCanale(String mod)
    {
        if (isOnOff())
        {
            if (mod == "+" && canale < CANALE_MAX)
                canale++;
            else if (mod == "-" && canale > 1)
                canale--;
        }
    }

    public void setCanale(int canale)
    {
        if (isOnOff())
        {
            if (canale <= CANALE_MAX && canale > 0)
                this.canale = canale;
        }
    }

    public String getCanale()
    {
        if (isOnOff())
        {
            return "cn: " + canale;
        }

        return "tv off";
    }

    public void setVolume(String mod)
    {
        if(isOnOff())
        {
            if(mod == "+" && volume < VOLUME_MAX)
                volume++;
            else if(mod == "-" && volume > 1)
                volume--;
            else if(mod == "mute")
                volume = 0;
        }
    }

    public String getVolume()
    {
        return "vol: " + volume;
    }
}