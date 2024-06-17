package triduc.com.demo_final.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;
import triduc.com.demo_final.model.Category;

import java.util.List;


public interface ICategoryRepository extends JpaRepository<Category,Integer> {

}

