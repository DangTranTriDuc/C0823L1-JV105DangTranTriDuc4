package triduc.com.blog.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import triduc.com.blog.model.Blog;

import java.util.List;

public interface IBlogRepository extends JpaRepository<Blog,Integer> {
    List<Blog> findBlogByTitleContaining(String title);
}
