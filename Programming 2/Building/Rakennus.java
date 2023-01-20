import java.util.ArrayList;
import java.util.List;

public class Rakennus {

    private double pintaAla;
    private int huoneidenLkm;
    private List<Asukas> asukkaat;

    public Rakennus(double pintaAla, int huoneidenLkm) {
        this.pintaAla = pintaAla;
        this.huoneidenLkm = huoneidenLkm;
        this.asukkaat = new ArrayList<Asukas>();
    }

    public double getPintaAla() {
        return this.pintaAla;
    }

    public void setPintaAla(double uusiPintaAla) {
        this.pintaAla = uusiPintaAla;
    }

    public int getHuoneidenLkm() {
        return this.huoneidenLkm;
    }

    public void setHuoneidenLkm(int uusiHuoneidenLkm) {
        this.huoneidenLkm = uusiHuoneidenLkm;
    }

    public List<Asukas> getAsukkaat() {
        return this.asukkaat;
    }

    public void setAsukkaat(List<Asukas> uudetAsukkaat) {
        this.asukkaat = uudetAsukkaat;
    }

    public void lisaaAsukas(Asukas uusiAsukas) {
        this.asukkaat.add(uusiAsukas);
    }

    public void rakennusTulostus() {
        System.out.println("Rakennus");
        System.out.println("Pinta-ala: " + this.pintaAla + " neliötä");
        System.out.println("Huoneita: " + this.huoneidenLkm);
        System.out.println("Asukkaiden määrä: " + this.asukkaat.size());
        System.out.println("");
        System.out.println("Asukas");
        this.asukkaat.forEach((asukas) -> asukas.tulostaAsukas());
    }

}
