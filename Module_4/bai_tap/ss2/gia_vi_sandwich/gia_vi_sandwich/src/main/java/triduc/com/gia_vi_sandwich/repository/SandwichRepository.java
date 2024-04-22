package triduc.com.gia_vi_sandwich.repository;

import org.springframework.stereotype.Repository;
import triduc.com.gia_vi_sandwich.model.Sandwich;

import java.util.ArrayList;
import java.util.List;
@Repository
public class SandwichRepository implements ISandwichRepository{
    private static List<Sandwich> sandwichList=new ArrayList<>();
    static {
        sandwichList.add(new Sandwich("sandwich 1",new String[]{"Lettuce","Tomato","Mustard","Sprouts"}));
        sandwichList.add(new Sandwich("sandwich 2",new String[]{"Lettuce","Tomato"}));
    }
    @Override
    public List<Sandwich> findAll() {
        return sandwichList;
    }

    @Override
    public boolean save(Sandwich sandwich) {
        return sandwichList.add(sandwich);
    }
}
