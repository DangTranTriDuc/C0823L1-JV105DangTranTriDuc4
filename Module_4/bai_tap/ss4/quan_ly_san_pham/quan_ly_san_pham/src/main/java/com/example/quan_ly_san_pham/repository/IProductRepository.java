package com.example.quan_ly_san_pham.repository;

import com.example.quan_ly_san_pham.model.Product;
import org.springframework.data.jpa.repository.JpaRepository;

import java.util.List;

public interface IProductRepository extends JpaRepository<Product,Integer> {
    List<Product> findProductByNameContaining(String name) ;
}
