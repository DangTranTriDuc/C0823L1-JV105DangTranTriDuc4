package triduc.com.demo_final.service.impl;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.stereotype.Service;
import triduc.com.demo_final.model.Manufacture;
import triduc.com.demo_final.repository.IManufactureRepository;
import triduc.com.demo_final.service.IManufactureService;

import java.util.List;

@Service
public class ManufactureService implements IManufactureService {
    @Autowired
    private IManufactureRepository manufactureRepository;


    @Override
    public List<Manufacture> findAll() {
        return manufactureRepository.findAll();
    }
}
