package triduc.com.gia_vi_sandwich.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import triduc.com.gia_vi_sandwich.model.Sandwich;
import triduc.com.gia_vi_sandwich.repository.ISandwichRepository;

import java.util.List;

@Service
public class SandwichService implements ISandwichService {
    @Autowired
    private ISandwichRepository sandwichRepository;

    @Override
    public List<Sandwich> findAll() {
        return sandwichRepository.findAll();
    }

    @Override
    public boolean save(Sandwich sandwich) {
        return sandwichRepository.save(sandwich);
    }
}
