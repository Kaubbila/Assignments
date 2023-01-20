
public class StandingSubscription extends Subscription {

    // Aina 12kk tilaus
    private int tilaus = 12;
    private int prosentti;

    public StandingSubscription (String lehti, String tilaaja, String osoite, double hinta, int prosentti) {
        super(lehti,tilaaja,osoite,hinta);
        this.prosentti = prosentti;
        
    }
    

    public int getProsentti() {
        return this.prosentti;
    }
    public void setProsentti(int prosentti) {
        this.prosentti = prosentti;
    }

    @Override
    public String printInvoice() {
        return String.format("\nKestotilaus %dkk (%.2f euroa/kk):\n" +
                             super.printInvoice() +
                             "Alennusprosentti: %d\n" +
                             "Kestotilauksen kokonaissumma: %.2f euroa", this.tilaus, super.getHinta(), this.prosentti,((super.getHinta() * this.tilaus) * (((double)100-this.prosentti) / 100)));
    }
}
