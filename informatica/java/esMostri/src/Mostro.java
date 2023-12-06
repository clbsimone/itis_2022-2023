public class Mostro {
    // ATTRIBUTI
    private String nome;
    private int vita;
    private int forza;
    private final int FORZA_MIN = 5;
    private final int FORZA_MAX = 10;
    private final int VITA_MIN = 0;
    private final int VITA_MAX = 100;

    // METODI
    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setVita(int vita) {
        if (vita <= VITA_MAX && vita >= VITA_MIN) this.vita = vita;
    }

    public void setForza(int forza) {
        if (forza <= FORZA_MAX && forza >= FORZA_MIN) this.forza = forza;
    }

    public String getNome() {
        return nome;
    }

    public int getVita() {
        return vita;
    }

    public int getForza() {
        return forza;
    }

    public void incrementoForza() {
        setForza(forza + 1);
    }

    public void incrementoForza(int valore) {
        setForza(valore + forza);
    }

    public String toString() {
        // op. polimorfo 2 + 5 + "ciao" stampa = 7 ciao
        // "ciao" + 2 + 5 stampa = ciao 2 5
        // "ciao" + (2 + 5) stampa ciao 7

        return nome + " [vita = " + vita + ", forza = " + forza + "]";
    }

    public Mostro(String nome, int vita, int forza) {
        this.nome = nome;

        if (forza <= FORZA_MAX && forza >= FORZA_MIN)
            this.forza = forza;
        else
            this.forza = FORZA_MAX / 2;

        if (vita <= VITA_MAX && vita >= VITA_MIN)
            this.vita = vita;
        else
            this.vita = VITA_MAX / 2;
    }

    public Mostro(String nome) {
        this.nome = nome;
        this.vita = VITA_MAX / 2;
        this.forza = FORZA_MAX / 2;
    }

}


