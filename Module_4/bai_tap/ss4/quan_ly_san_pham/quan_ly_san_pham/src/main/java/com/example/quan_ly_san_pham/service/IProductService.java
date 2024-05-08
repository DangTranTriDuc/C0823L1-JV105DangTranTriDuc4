package com.example.quan_ly_san_pham.service;

import com.example.quan_ly_san_pham.model.Product;

import java.util.List;

public interface IProductService {
    List<Product> findAll();

    List<Product> findProductByNameContaining(String name);

    Product findById(int id);
    boolean save(Product product);
    void delete(int id);
}
