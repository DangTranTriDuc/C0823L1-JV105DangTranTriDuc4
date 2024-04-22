package triduc.com.gia_vi_sandwich.model;

public class Sandwich {
    private String name ;
    private String [] condiment ;

    public Sandwich() {
    }

    public Sandwich(String name, String[] condiment) {
        this.name = name;
        this.condiment = condiment;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String[] getCondiment() {
        return condiment;
    }

    public void setCondiment(String[] condiment) {
        this.condiment = condiment;
    }
}
