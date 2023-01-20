public class Asukas {

    private String nimi;
    private String syntymaAika;

    public Asukas(String nimi, String syntymaAika) {
        this.nimi = nimi;
        this.syntymaAika = syntymaAika;
    }

    public String getNimi() {
        return this.nimi;
    }

    public void setNimi(String nimi) {
        this.nimi = nimi;
    }

    public String getSyntymaAika() {
        return this.syntymaAika;
    }

    public void setSyntymaAika(String syntymaAika) {
        this.syntymaAika = syntymaAika;
    }

    public void tulostaAsukas() {
        System.out.println("Nimi: " + this.nimi + " / Syntymäaika: " + this.syntymaAika);
    }

}
