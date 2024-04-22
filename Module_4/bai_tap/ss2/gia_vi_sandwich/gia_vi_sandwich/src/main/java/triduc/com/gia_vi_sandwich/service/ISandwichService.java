package triduc.com.gia_vi_sandwich.service;

import triduc.com.gia_vi_sandwich.model.Sandwich;

import java.util.List;

public interface ISandwichService {
    List<Sandwich> findAll();
    boolean save (Sandwich sandwich) ;
}
