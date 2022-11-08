public class Dati {
    private String cognome;
    private String nome;
    private int eta;
    private String sesso;
    private float media_maschi;
    private float n_maschi;
    private float media_femmine;
    private float n_femmine;

    public Dati(String stringa_completa)
    {
        String[] parts = stringa_completa.split("-");
        
        cognome = parts[0];
        nome = parts[1];
        eta = Integer.parseInt(parts[2]); // si usa quando non si riesce a castare normalmente
        sesso = parts[3];

        if(sesso.equals("M"))
        {
            media_maschi = ((media_maschi * n_maschi) + eta) / ++n_maschi;
        }
        else
        {
            media_femmine = ((media_femmine * n_femmine) + eta) / ++n_femmine;
        }
    }
    public String printMedie()
    {
        return "media M: " + media_maschi + "\n" + "media F: " + media_femmine;
    }

    public String toString() {
        return cognome.toUpperCase() + " " + nome.substring(0, 1).toUpperCase() + nome.substring(1);
    }
}