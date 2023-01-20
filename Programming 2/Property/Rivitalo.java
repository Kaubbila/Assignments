import java.util.List;
import java.util.Map;

public class Rivitalo  extends Rakennus{

    public Rivitalo(Map<String, List<Asukas>> asunnot) {
        super(asunnot);      
    }

    @Override
    public void rakennusTulostus() {
        System.out.println("Rakennuksen tyyppi: Rivitalo");
        super.rakennusTulostus();
    }
}
