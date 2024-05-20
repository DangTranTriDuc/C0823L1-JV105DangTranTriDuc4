package triduc.com.blog.service;

import triduc.com.blog.model.Category;

import java.util.List;

public interface ICategoryService {
    List<Category> findAll();
    boolean save(Category category);
    void delete(int id);
    Category findById(int id);
}
