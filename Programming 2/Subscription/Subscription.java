public class Subscription {
    //Tilauksen tiedot.
    private String lehti;
    private String tilaaja;
    private String osoite;
    private double hinta;

    public Subscription(String lehti, String tilaaja, String osoite, double hinta) {
        this.lehti = lehti;
        this.tilaaja = tilaaja;
        this.osoite = osoite;
        this.hinta = hinta;
    }    

    public String getLehti() {
        return this.lehti;
    }
    public void setLehti(String lehti) {
        this.lehti = lehti;
    }
    public String getTilaaja() {
        return this.tilaaja;
    }
    public void setTilaaja(String tilaaja) {
        this.tilaaja = tilaaja;
    }
    public String getToimitusOsoite() {
        return this.osoite;
    }
    public void setToimitusOsoite(String osoite) {
        this.osoite = osoite;
    }
    public double getHinta() {
        return this.hinta;
    }
    public void setHinta(double hinta) {
        this.hinta = hinta;
    }

    public String printInvoice() {
        return String.format("Lehti: %s\n" +
                             "Tilaaja: %s\n" +
                             "Tilausosoite: %s\n",this.lehti,this.tilaaja,this.osoite,this.hinta);
    }

}
