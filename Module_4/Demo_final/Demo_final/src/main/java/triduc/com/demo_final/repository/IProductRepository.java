package triduc.com.demo_final.repository;

import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.stereotype.Repository;
import triduc.com.demo_final.dto.ProductDTO;
import triduc.com.demo_final.model.Product;

import java.util.List;


public interface IProductRepository extends JpaRepository<Product,Integer> {
    @Query(value = "SELECT product.id, product.color, product.price, product.quantity, product.product_name FROM product JOIN category ON product.category_id = category.category_id JOIN manufacture ON product.manufacture_id = manufacture.manufacture_id",nativeQuery = true)
    List<ProductDTO> findAllProductDTO();
    Page<Product> findProductByProductNameContainingIgnoreCaseAndManufacture_ManufactureNameContainingIgnoreCase(String productName, String manufactureName, Pageable pageable);
}
