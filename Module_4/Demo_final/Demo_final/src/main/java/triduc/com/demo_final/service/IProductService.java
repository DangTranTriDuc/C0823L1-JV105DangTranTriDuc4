package triduc.com.demo_final.service;

import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import triduc.com.demo_final.dto.ProductDTO;
import triduc.com.demo_final.model.Product;

import java.util.List;

public interface IProductService {
    List<Product> findAll();
    List<ProductDTO> findAllProductDTO();
    Page<Product> findProductByNameAndManufactureContaining(String productName, String manufacture, Pageable pageable);
    Product findById(int id);
    boolean save(Product product);
    void delete(int id);
}
