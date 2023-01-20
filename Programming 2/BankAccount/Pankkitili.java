public class Pankkitili {
    
    private String Tilinumero;
    private String Omistaja;
    private double Saldo;

    public Pankkitili(String Omistaja, String Tilinumero, double Saldo) {
        this.Omistaja = Omistaja;
        this.Tilinumero = Tilinumero;
        this.Saldo = Saldo; 
    }


    public String getTilinumero() {
        return this.Tilinumero;
    }
    public void setTilinumero(String uusiTilinumero) {
        this.Tilinumero = uusiTilinumero;
    }
    public String getOmistaja() {
        return this.Omistaja;
    }
    public void setOmistaja(String uusiOmistaja) {
        this.Omistaja = uusiOmistaja;
    }
    public double getSaldo() {
        return this.Saldo;
    }
    public void setSaldo(double uusiSaldo) {
        this.Saldo = uusiSaldo;
    }

    public void otto (double nosto) {
        if (nosto <= 0 ) {
            System.out.println("Virheellinen määrä");
            return;
        } else if (this.Saldo - nosto < 0) {
            System.out.println("Tilillä ei ole riittävästi katetta nostoon");
            return;
        }
        this.Saldo -= nosto;
    }

    public void talletus (double Talletus) {
        if (Talletus <= 0) {
            System.out.println("Virheellinen määrä");
            return;
        }
        this.Saldo += Talletus;
    }

    public void tiliTulostus() {
        System.out.println("Omistaja: " + this.Omistaja);
        System.out.println("Tilinumero: " + this.Tilinumero);
        System.out.println("Saldo: " + this.Saldo);
    }

    
    
}
