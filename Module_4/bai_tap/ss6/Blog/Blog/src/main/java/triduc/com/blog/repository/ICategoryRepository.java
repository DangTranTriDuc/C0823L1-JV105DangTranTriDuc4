package triduc.com.blog.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import triduc.com.blog.model.Category;

public interface ICategoryRepository extends JpaRepository<Category,Integer> {
}
