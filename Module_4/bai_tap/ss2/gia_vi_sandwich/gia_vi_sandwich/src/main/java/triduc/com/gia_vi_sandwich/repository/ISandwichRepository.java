package triduc.com.gia_vi_sandwich.repository;

import triduc.com.gia_vi_sandwich.model.Sandwich;

import java.util.List;

public interface ISandwichRepository {
    List<Sandwich> findAll();
    boolean save (Sandwich sandwich) ;
}
