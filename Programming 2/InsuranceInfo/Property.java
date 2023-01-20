public class Property {
    
    private String tyyppi;
    private String sijainti;

    public Property (String tyyppi, String sijainti) {
        this.tyyppi = tyyppi;
        this.sijainti = sijainti;
    }

    public String getTyyppi() {
        return this.tyyppi;
    }

    public void setTyyppi(String tyyppi) {
        this.tyyppi = tyyppi;
    }

    public String getSijainti() {
        return this.sijainti;
    }

    public void setSijainti(String sijainti) {
        this.sijainti = sijainti;
    }

}
