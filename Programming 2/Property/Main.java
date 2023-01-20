import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class Main {

    public static Scanner lukija = new Scanner(System.in);
    public static void main(String[] args) {

        // Tontti
        System.out.print("Syötä tontin nimi > ");
        String nimi = lukija.nextLine();
        System.out.print("Syötä tontin osoite > ");
        String osoite = lukija.nextLine();
        System.out.print("Syötä tontin pinta-ala > ");
        double pintaAla = lukija.nextDouble();
        if(pintaAla < 0) {
            System.out.println("Virheellinen määrä");
            System.exit(0);
        }

        // Rakennus
        System.out.println("Syötä rakennuksen tyyppi > ");
        System.out.println("1. Kerrostalo ");
        System.out.println("2. Rivitalo ");
        System.out.println("3. Omakotitalo ");
        int tyyppi = lukija.nextInt();
        if(tyyppi < 1 || tyyppi > 3) {
            System.out.println("Virheellinen määrä");
            System.exit(0);
        }

        Map<String, List<Asukas>> parametri = new HashMap<String, List<Asukas>>();
        Rakennus rakennus = tyyppi == 1 ? new Kerrostalo(parametri) : tyyppi == 2 ? new Rivitalo(parametri) : new Omakotitalo(parametri);

        while(true) {

            System.out.print("Huoneiston pinta-ala > ");
            double huoneistonPintaAla = lukija.nextDouble();
            if(huoneistonPintaAla < 0) {
                System.out.println("Virheellinen määrä");
                System.exit(0);
            }

            System.out.print("Huoneiden lukumäärä > ");
            int lkm = lukija.nextInt();
            if(lkm < 0) {
                System.out.println("Virheellinen määrä");
                System.exit(0);
            }
            
            List<Asukas> asukkaat = new ArrayList<>();
            lukija.nextLine();

            while(true) {

                System.out.print("Syötä asukkaan nimi > ");
                String asukas = lukija.nextLine();
                asukkaat.add(new Asukas(asukas));
                System.out.println("Haluatko lisää asukkaita?");
                System.out.println("1. Lisää");
                System.out.println("0. Poistu");
                int valinta = lukija.nextInt();
                lukija.nextLine();
                if(valinta != 1) {
                    break;
                }
            }

            rakennus.lisaaAsunto(huoneistonPintaAla, lkm, asukkaat);
            System.out.println("Haluatko lisätä uuden huoneiston?");
            System.out.println("1. Lisää");
            System.out.println("0. Poistu");
            int valinta = lukija.nextInt();
            if(valinta != 1) {
                break;
            }
        }

        Tontti tontti = new Tontti(nimi, osoite, pintaAla, rakennus);

        // Tulostus
        tontti.tonttiTulostus();
    }

}
