import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static Scanner lukija = new Scanner(System.in);
    static Locale enUs= new Locale("en", "US");

    public static void main(String[] args) {
        /*
         * Käytä pisteitä, älä pilkkuja.
         */
        lukija.useLocale(enUs);

        // Rakennus
        System.out.print("Syötä rakennuksen pinta-ala > ");
        double pintaAlaRakennus = lukija.nextDouble();
        if(pintaAlaRakennus < 0) {
            System.out.println("Virheellinen määrä");
            System.exit(0);
        }
        System.out.print("Syötä huoneiden lkm > ");
        int huoneita = lukija.nextInt();
        lukija.nextLine(); // Tyhjennetään bufferi
        Rakennus rakennus = new Rakennus(pintaAlaRakennus, huoneita);

        // Asukkaat
        while (true) {
            System.out.print("Syötä asukkaan nimi > ");
            String asukasNimi = lukija.nextLine();
            System.out.print("Syötä asukkaan syntymäaika > ");
            String syntymaAika = lukija.nextLine();
            rakennus.lisaaAsukas(new Asukas(asukasNimi, syntymaAika));
            System.out.println("Enter = Uusi asukas");
            System.out.println("0 = Lopettaa. ");
            String syote = lukija.nextLine();
            if (syote.equals("0")) {
                break;
            } 
        }

        // Tontti
        System.out.print("Syötä tontin nimi > ");
        String nimi = lukija.nextLine();
        System.out.print("Syötä tontin pinta-ala > ");
        double pintaAla = lukija.nextDouble();
        if(pintaAla < 0) {
            System.out.println("Virheellinen määrä");
            System.exit(0);
        }
        lukija.nextLine();
        System.out.print("Syötä sijainnin leveys > ");
        String leveys = lukija.nextLine();
        System.out.print("Syötä sijainnin pituus > ");
        String pituus = lukija.nextLine();
        Tontti tontti = new Tontti(nimi, pintaAla, leveys, pituus, rakennus);

        // Tulostus
        tontti.tonttiTulostus();
    }

}
