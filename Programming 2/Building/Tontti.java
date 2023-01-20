public class Tontti {

    private String nimi;
    private double pintaAla;
    private String leveys;
    private String pituus;
    private Rakennus rakennus;

    public Tontti(String nimi, double pintaAla,String leveys, String pituus, Rakennus rakennus) {
        this.nimi = nimi;
        this.leveys = leveys;
        this.pituus = pituus;
        this.pintaAla = pintaAla;
        this.rakennus = rakennus;
    }

    public String getNimi() {
        return nimi;
    }

    public void setNimi(String uusiNimi) {
        this.nimi = uusiNimi;
    }

    public String getPituus() {
        return this.pituus;
    }

    public void setPituus(String uusiPituus) {
        this.pituus = uusiPituus;
    }

    public String getLeveys() {
        return this.leveys;
    }

    public void setLeveys(String uusiLeveys) {
        this.leveys = uusiLeveys;
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
        System.out.println("*******************************************");
        System.out.println("Tontti");
        System.out.println("Nimi: " + this.nimi);
        System.out.println("Tontin pinta-ala: " + this.pintaAla + " neliötä");
        System.out.println("Sijainti: leveys " + this.leveys + " / pituus " + this.pituus);
        System.out.println("");
        this.rakennus.rakennusTulostus();
    }
}
