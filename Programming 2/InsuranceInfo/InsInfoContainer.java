import java.util.ArrayList;
import java.util.List;

public class InsInfoContainer {
    
    private List<InsuranceInfo> sailio;

    public InsInfoContainer (ArrayList<InsuranceInfo> sailio) {
        this.sailio = sailio;
    }

    public void lisaa(InsuranceInfo insuranceInfo) {
        this.sailio.add(insuranceInfo);
    }

    public List<InsuranceInfo> getSailio() {
        return this.sailio;
    }

    public void setSailio(List<InsuranceInfo> sailio) {
        this.sailio = sailio;
    }

    public void tulosta() {
        for(InsuranceInfo insuranceInfo : sailio) {
            System.out.println("Sijainti: " + insuranceInfo.getKiinteisto().getSijainti() + ", Kiinteistö: " + insuranceInfo.getKiinteisto().getTyyppi() + ", Hinta: " + insuranceInfo.getArvo()); 
        }
    }

    public void tulostaPienemmat(double ylaraja) {
        for(InsuranceInfo insuranceInfo : sailio) {
            if(insuranceInfo.getArvo() < ylaraja) {
                System.out.println("Sijainti: " + insuranceInfo.getKiinteisto().getSijainti() + ", Kiinteistö: " + insuranceInfo.getKiinteisto().getTyyppi() + ", Hinta: " + insuranceInfo.getArvo()); 
            }
        }
    }

    public void tulostaSuuremmat(double alaraja) {
        for(InsuranceInfo insuranceInfo : sailio) {
            if(insuranceInfo.getArvo() > alaraja) {
                System.out.println("Sijainti: " + insuranceInfo.getKiinteisto().getSijainti() + ", Kiinteistö: " + insuranceInfo.getKiinteisto().getTyyppi() + ", Hinta: " + insuranceInfo.getArvo()); 
            }
        }

    }

}
