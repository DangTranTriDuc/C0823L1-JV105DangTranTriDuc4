package triduc.com.demo_final.service.impl;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.stereotype.Service;
import triduc.com.demo_final.dto.ProductDTO;
import triduc.com.demo_final.model.Product;
import triduc.com.demo_final.repository.IProductRepository;
import triduc.com.demo_final.service.IProductService;

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
    public List<ProductDTO> findAllProductDTO() {
        return productRepository.findAllProductDTO();
    }

    @Override
    public Page<Product> findProductByNameAndManufactureContaining(String productName, String manufacture, Pageable pageable) {
        return productRepository.findProductByProductNameContainingIgnoreCaseAndManufacture_ManufactureNameContainingIgnoreCase(productName,manufacture,pageable);
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
