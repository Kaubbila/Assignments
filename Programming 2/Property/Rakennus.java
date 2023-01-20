import java.util.List;
import java.util.Map;

public class Rakennus {

    private Map<String, List<Asukas>> asunnot;

    public Rakennus(Map<String,List<Asukas>> asunnot) {
        this.asunnot = asunnot;
    }

    public Map<String, List<Asukas>> getAsunnot() {
        return this.asunnot;
    }

    public void setAsunnot(Map<String, List<Asukas>> asunnot) {
        this.asunnot = asunnot;
    }

    public void lisaaAsunto(double pintaAla, int huoneita, List<Asukas> asukkaat) {
        String asunnonTiedot = asunnot.size() + "," + pintaAla + "," +  huoneita;
        asunnot.put(asunnonTiedot, asukkaat);
    }


    public void rakennusTulostus() {
        int i = 1;
        for(Map.Entry<String, List<Asukas>> entry : asunnot.entrySet()) {
            String[] splitted = entry.getKey().split(",");
            System.out.println("Asunto nro: " + (i));
            System.out.println("Asunnon pinta-ala: " + splitted[1] + " neliötä");
            System.out.println("Huoneet: " + splitted[2]);
            System.out.println("Asukkaat: ");
            i++;
            for(Asukas a : entry.getValue()) {
                a.tulostaAsukas();
            }
            System.out.println("");
        }
    }
}
