public class Asukas {

    private String nimi;

    public Asukas(String nimi) {
        this.nimi = nimi;
    }

    public String getNimi() {
        return this.nimi;
    }

    public void setNimi(String nimi) {
        this.nimi = nimi;
    }
    
    public void tulostaAsukas() {
        System.out.println("Nimi: " + this.nimi);
    }

}
