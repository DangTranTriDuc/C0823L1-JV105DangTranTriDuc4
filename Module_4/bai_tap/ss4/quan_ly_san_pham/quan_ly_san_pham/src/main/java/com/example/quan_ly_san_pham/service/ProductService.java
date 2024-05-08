package com.example.quan_ly_san_pham.service;

import com.example.quan_ly_san_pham.model.Product;
import com.example.quan_ly_san_pham.repository.IProductRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;
@Service
public class ProductService implements IProductService {
    @Autowired
    private IProductRepository productRepository;
    @Override
    public List<Product> findAll() {
        return productRepository.findAll();
    }

    @Override
    public List<Product> findProductByNameContaining(String name) {
        return productRepository.findProductByNameContaining(name);
    }

    @Override
    public Product findById(int id) {
        return productRepository.findById(id).get();
    }

    @Override
    public boolean save(Product product) {
        return productRepository.save(product)!=null;
    }

    @Override
    public void delete(int id) {
        productRepository.deleteById(id);
    }
}
