import java.util.Scanner;

public class Vt3Main {

    public static void main(String[] args) {

        Scanner lukija = new Scanner (System.in);
        // Subscription tiedot
        System.out.print("Syötä lehden nimi > ");
        String lehti = lukija.nextLine();
        System.out.print("Syötä tilaajan nimi > ");
        String nimi = lukija.nextLine();
        System.out.print("Syötä tilausosoite > ");
        String osoite = lukija.nextLine();
        System.out.print("Syötä hinta/kk > ");
        double hinta = lukija.nextDouble();
        if(hinta < 0) {
            System.out.println("Virheellinen arvo");
            System.exit(0);
        }

        // Regular Subscription
        System.out.print("Syötä kuukausitilauksen kesto > ");
        int kesto = lukija.nextInt();
        if(kesto < 0) {
            System.out.println("Virheellinen arvo");
            System.exit(0);
        }
        
        RegularSubscription regularSub = new RegularSubscription(lehti,nimi,osoite,hinta,kesto);

        // Standing subscription
        System.out.print("Syötä kestotilauksen alennusprosentti > ");
        int alennus = lukija.nextInt();
        if(alennus < 0) {
            System.out.println("Virheellinen arvo");
            System.exit(0);
        }

        StandingSubscription standingSub = new StandingSubscription(lehti,nimi,osoite,hinta,alennus);

        printSubscriptionInvoice(regularSub);
        printSubscriptionInvoice(standingSub);
        lukija.close();
    }

    static void printSubscriptionInvoice(Subscription subs) {
        System.out.println(subs.printInvoice());
    }

}


