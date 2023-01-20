import java.util.List;
import java.util.Map;

public class Kerrostalo extends Rakennus{

    public Kerrostalo(Map<String, List<Asukas>> asunnot) {
        super(asunnot);
    }

    @Override
    public void rakennusTulostus() {
        System.out.println("Rakennuksen tyyppi: Kerrostalo");
        super.rakennusTulostus();
    }
}
