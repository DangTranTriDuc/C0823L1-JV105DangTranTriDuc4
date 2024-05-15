package triduc.com.blog.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
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
    public List<Blog> findBlogByTitleContaining(String title) {
        return blogRepository.findBlogByTitleContaining(title);
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
