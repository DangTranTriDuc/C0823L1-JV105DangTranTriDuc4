package triduc.com.blog.repository;

import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import triduc.com.blog.dto.BlogDTO;
import triduc.com.blog.model.Blog;

import java.util.List;

public interface IBlogRepository extends JpaRepository<Blog,Integer> {
    Page<Blog> findBlogByTitleContaining(String title,Pageable pageable);
    @Query(value = "select id,title,author from blog ",nativeQuery = true)
    List<BlogDTO> findBlogDTO();
}
