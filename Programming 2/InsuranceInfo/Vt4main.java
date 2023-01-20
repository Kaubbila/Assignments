import java.util.ArrayList;
import java.util.Scanner;

public class Vt4main {
    public static void main(String[] args) {

        Scanner lukija = new Scanner(System.in);
        InsInfoContainer insInfoContainer = new InsInfoContainer(new ArrayList<InsuranceInfo>());

        int i = 0;
        while(true) {
        System.out.print("Syötä sijainti > ");
        String sijainti = lukija.nextLine();
        System.out.print("Syötä kiinteistön tyyppi > ");
        String tyyppi = lukija.nextLine();
        System.out.print("Syötä vakuutusarvo >");
        Double arvo = lukija.nextDouble();
        if(arvo < 0) {
            System.out.println("Väärä arvo!");
            System.exit(0);
        }

        Property property = new Property(sijainti,tyyppi);
        InsuranceInfo insuranceInfo = new InsuranceInfo(property, arvo);
        insInfoContainer.lisaa(insuranceInfo);
     
        if (i > 3) {
            System.out.println("Poistutaanko?");
            System.out.println("0. Poistuu.");
            System.out.println("1. Syötä lisää");
            int valinta = lukija.nextInt();
            if (valinta == 0) {
                break;
            }
        }
        i++;
        lukija.nextLine();
    }

    insInfoContainer.tulosta();

    System.out.println("");
    System.out.print("Anna yläraja vakuutusarvolle > ");
    double alaraja = lukija.nextDouble();
    if(alaraja < 0) {
        System.out.println("Väärä arvo!");
        System.exit(0);
    }

    insInfoContainer.tulostaPienemmat(alaraja);

    System.out.println("");
    System.out.print("Anna alaraja vakuutusarvolle > ");
    double ylaraja = lukija.nextDouble();
    if(ylaraja < 0) {
        System.out.println("Väärä arvo!");
        System.exit(0);
    }

    insInfoContainer.tulostaSuuremmat(ylaraja);
    lukija.close();
    }
}
