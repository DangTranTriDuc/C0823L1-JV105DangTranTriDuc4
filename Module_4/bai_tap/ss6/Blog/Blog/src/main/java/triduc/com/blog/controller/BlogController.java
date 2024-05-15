package triduc.com.blog.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.ui.ModelMap;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.servlet.mvc.support.RedirectAttributes;
import triduc.com.blog.model.Blog;
import triduc.com.blog.service.IBlogService;

import java.util.List;

@Controller
@RequestMapping("blogs")
public class BlogController {
    @Autowired
    private IBlogService blogService;
    @GetMapping("")
    public String showList(ModelMap model){
        List<Blog> blogList=blogService.findAll();
        model.addAttribute("blogList",blogList);
        return "blog/list";
    }
    @GetMapping("/detail")
    public String detail(@RequestParam(required = false,defaultValue = "3") int id , Model model){
        model.addAttribute("blog",blogService.findById(id));
        return "blog/detail";
    }
    @GetMapping("/update")
    public String showFormUpdate(@RequestParam int id, Model model){
        Blog blog=blogService.findById(id);
        model.addAttribute("blog",blog);
        return "blog/update" ;
    }
    @PostMapping("/update")
    public String update(@ModelAttribute Blog blog){
        blogService.save(blog);
        return "redirect:/blogs";
    }
    @GetMapping("/create")
    public String showFormCreate(Model model){
        model.addAttribute("blog",new Blog());
        return "blog/create";
    }
    @PostMapping("/create")
    public String save(@ModelAttribute Blog blog, RedirectAttributes redirectAttributes){
        redirectAttributes.addFlashAttribute("mess","add success");
        blogService.save(blog);
        return "redirect:/blogs";
    }
    @PostMapping("/delete")
    public String delete(@RequestParam int deleteId){
        blogService.delete(deleteId);
        return "redirect:/blogs";
    }
    @PostMapping("/search")
    public String search(@RequestParam String searchName, Model model){
        List<Blog> blogList=blogService.findBlogByTitleContaining(searchName);
        model.addAttribute("blogList",blogList);
        return "blog/list";
    }
}
