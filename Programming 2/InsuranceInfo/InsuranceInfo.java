public class InsuranceInfo {
    
    private Property kiinteisto;
    private double arvo;

    public InsuranceInfo (Property kiinteisto, double arvo) {
        this.kiinteisto = kiinteisto;
        this.arvo = arvo;
    }

    public Property getKiinteisto() {
        return this.kiinteisto;
    }

    public void setKiinteisto(Property kiinteisto) {
        this.kiinteisto = kiinteisto;
    }

    public double getArvo() {
        return this.arvo;
    }

    public void setArvo(double arvo) {
        this.arvo = arvo;
    }
    
}
