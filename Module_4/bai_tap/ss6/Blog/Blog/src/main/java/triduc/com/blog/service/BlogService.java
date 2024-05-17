package triduc.com.blog.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.stereotype.Service;
import triduc.com.blog.dto.BlogDTO;
import triduc.com.blog.model.Blog;
import triduc.com.blog.repository.IBlogRepository;

import java.util.List;
@Service
public class BlogService  implements IBlogService {
    @Autowired
    private IBlogRepository blogRepository;
    @Override
    public List<Blog> findAll() {
        return blogRepository.findAll();
    }

    @Override
    public List<BlogDTO> findBlogDTOAll() {
        return blogRepository.findBlogDTO();
    }

    @Override
    public Page<Blog> findBlogByTitleContaining(String title, Pageable pageable) {
        return blogRepository.findBlogByTitleContaining(title,pageable);
    }

    @Override
    public Blog findById(int id) {
        return blogRepository.findById(id).get();
    }

    @Override
    public boolean save(Blog blog) {
        return blogRepository.save(blog)!=null;
    }

    @Override
    public void delete(int id) {
        blogRepository.deleteById(id);
    }
}
