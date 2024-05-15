package triduc.com.blog.service;

import triduc.com.blog.model.Blog;

import java.util.List;

public interface IBlogService {
    List<Blog> findAll();
    List<Blog> findBlogByTitleContaining(String title);
    Blog findById(int id);
    boolean save(Blog blog);
    void delete(int id);
}
