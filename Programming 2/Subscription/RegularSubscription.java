public class RegularSubscription extends Subscription {

    private int kesto; 

    public RegularSubscription (String lehti, String tilaaja, String osoite, double hinta, int kesto) {
       super(lehti,tilaaja,osoite,hinta);
       this.kesto=kesto;
    }

    public int getKesto() {
        return this.kesto;
    }

    public void setKesto(int kesto) {
        this.kesto = kesto;
    }
    @Override
    public String printInvoice() {
        return String.format("\nKuukausitilaus %dkk (%.2f euroa/kk)\n" +
                             super.printInvoice() +
                             "Kuukausitilauksen kokonaissumma: %.2f euroa",this.kesto, super.getHinta(),(super.getHinta() * this.kesto));
    }
}