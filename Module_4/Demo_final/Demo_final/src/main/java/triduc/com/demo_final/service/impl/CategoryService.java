package triduc.com.demo_final.service.impl;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.stereotype.Service;
import triduc.com.demo_final.model.Category;
import triduc.com.demo_final.repository.ICategoryRepository;
import triduc.com.demo_final.service.ICategoryService;

import java.util.List;
@Service
public class CategoryService implements ICategoryService {
    @Autowired
    private ICategoryRepository categoryRepository;
    @Override
    public List<Category> findAll() {
        return categoryRepository.findAll();
    }
}
