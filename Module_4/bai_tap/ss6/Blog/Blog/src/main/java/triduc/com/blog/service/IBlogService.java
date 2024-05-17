package triduc.com.blog.service;

import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import triduc.com.blog.dto.BlogDTO;
import triduc.com.blog.model.Blog;

import java.util.List;

public interface IBlogService {
    List<Blog> findAll();
    List<BlogDTO> findBlogDTOAll();
    Page<Blog> findBlogByTitleContaining(String title, Pageable pageable);
    Blog findById(int id);
    boolean save(Blog blog);
    void delete(int id);
}
