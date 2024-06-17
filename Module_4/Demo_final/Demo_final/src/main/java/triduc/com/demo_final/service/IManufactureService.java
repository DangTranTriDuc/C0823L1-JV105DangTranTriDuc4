package triduc.com.demo_final.service;

import triduc.com.demo_final.model.Category;
import triduc.com.demo_final.model.Manufacture;

import java.util.List;

public interface IManufactureService {
    List<Manufacture> findAll();
}
