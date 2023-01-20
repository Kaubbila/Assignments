import java.util.List;
import java.util.Map;

public class Omakotitalo extends Rakennus{

    public Omakotitalo(Map<String, List<Asukas>> asunnot) {
        super(asunnot);
    }
    
    @Override
    public void rakennusTulostus() {
        System.out.println("Rakennuksen tyyppi: Omakotitalo");
        super.rakennusTulostus();
    }
}
