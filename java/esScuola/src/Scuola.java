public class Scuola {
    private int n_classi;
    private int[] classe;
    private int tot_partecipanti;
    private final static int MIN_S = 15;
    private final static int MAX_S = 30;

    public Scuola(int n_classi)
    {
        do
        {
            this.n_classi = n_classi;
        } while (n_classi < 0);

        caricaStudenti();
        tot_partecipanti = partecipanti();
    }

    private void caricaStudenti()
    {
        classe = new int[n_classi];

        for(int i = 0; i < n_classi; i++)
        {
            classe[i] = (int)Math.floor(Math.random() * (MAX_S - MIN_S + 1) + MIN_S);
        }
    }

    private int partecipanti()
    {
        int somma = 0;

        for(int i = 0; i < n_classi; i++)
        {
            somma = somma + classe[i];
        }

        return somma;
    }

    private float media()
    {
        return tot_partecipanti / n_classi;
    }

    private int massimo()
    {
        int max = classe[0];

        for (int i = 0; i < n_classi; i++) {
            if(max < classe[i])
            {
                max = classe[i];
            }
        }

        return max;
    }

    private int minimo() {
        int min = classe[0];

        for (int i = 0; i < n_classi; i++) {
            if (min > classe[i]) {
                min = classe[i];
            }
        }

        return min;
    }

    public int[] getClassi()
    {
        return classe;
    }

    public String toString()
    {
        return "partecipanti: " + tot_partecipanti + "\n" + "media: " + media() + "\n" + "partecipanti minori: " + minimo() +  "\n" + "partecipanti maggiori: " + massimo();
    }
}
