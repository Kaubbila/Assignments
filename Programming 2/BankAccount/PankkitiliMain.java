import java.util.Scanner;

public class PankkitiliMain {

    public static Scanner lukija = new Scanner(System.in);
    public static void main(String[] args) {

        System.out.print("Syötä Nimi > ");
        String nimi = lukija.nextLine();
        System.out.print("Syötä Tilinumero > ");
        String tilinumero = lukija.nextLine();
        System.out.print("Syötä Saldo > ");
        double saldo = lukija.nextDouble();
        Pankkitili pankkitili = new Pankkitili(nimi,tilinumero,saldo);
        tiedotTulostus(pankkitili);

        boolean OhjelmaPaalla = true;

        while(OhjelmaPaalla) {
            tulostaOhjeet();
            int Valinta = lukija.nextInt();
            switch (Valinta) {
                case 1:
                    nostoOhjeet(pankkitili);
                    tiedotTulostus(pankkitili);
                    break;
                case 2:
                    talletusOhjeet(pankkitili);
                    break;
                case 3:
                    saldoTulostus(pankkitili);
                    break;
                case 4:
                    tiedotTulostus(pankkitili);
                    break;
                case 5:
                    lopetusTeksti();
                    OhjelmaPaalla = false;
                default:
                if(Valinta < 1 || Valinta > 5)
                System.out.println("Valitse oikea luku");
            }
        }

        lukija.close();
    }
    public static void tulostaOhjeet() {
        System.out.println("\n***Tervetuloa***");
        System.out.println("Valitse seuraavista: ");
        System.out.println("1. Otto");
        System.out.println("2. Talletus");
        System.out.println("3. Saldo");
        System.out.println("4. Tulosta tiedot");
        System.out.println("5. Lopeta");
    }

    public static void nostoOhjeet(Pankkitili pankkitili) {
        System.out.println("\nSyötä noston määrä");
        double NostonMaara = lukija.nextDouble();
        pankkitili.otto(NostonMaara);
    }

    public static void talletusOhjeet(Pankkitili pankkitili) {
        System.out.println("\nSyötä talletuksen määrä");
        double Talletus = lukija.nextDouble();
        pankkitili.talletus(Talletus);
    }

    public static void saldoTulostus(Pankkitili pankkitili) {
        System.out.println("\nSaldo: " + pankkitili.getSaldo());
    }

    public static void tiedotTulostus(Pankkitili pankkitili) {
        System.out.println();
        System.out.println("Tili:");
        pankkitili.tiliTulostus();
    }

    public static void lopetusTeksti() {
        System.out.println("Kiitos käynnistä ja tervetuloa uudelleen!");
    }
}
