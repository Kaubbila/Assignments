public class Tontti {

    private String nimi;
    private String osoite;
    private double pintaAla;
    private Rakennus rakennus;

    public Tontti(String nimi, String osoite, double pintaAla, Rakennus rakennus) {
        this.nimi = nimi;
        this.osoite = osoite;
        this.pintaAla = pintaAla;
        this.rakennus = rakennus;
    }

    public String getNimi() {
        return this.nimi;
    }

    public void setNimi(String uusiNimi) {
        this.nimi = uusiNimi;
    }

    public String getOsoite() {
        return this.osoite;
    }

    public void setOsoite(String uusiOsoite) {
        this.osoite = uusiOsoite;
    }

    public double getPintaAla() {
        return this.pintaAla;
    }

    public void setPintaAla(double uusiPintaAla) {
        this.pintaAla = uusiPintaAla;
    }

    public Rakennus getRakennus() {
        return this.rakennus;
    }

    public void setRakennus(Rakennus uusiRakennus) {
        this.rakennus = uusiRakennus;
    }

    public void tonttiTulostus() {
        System.out.println("");
        System.out.println("Tontin nimi: " + this.nimi);
        System.out.println("Osoite: " + this.osoite);
        System.out.println("Tontin pinta-ala: " + this.pintaAla + " neliötä");
        System.out.println("");
        this.rakennus.rakennusTulostus();
    }
}
