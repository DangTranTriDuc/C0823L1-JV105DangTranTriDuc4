package triduc.com.blog.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.ui.ModelMap;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.servlet.mvc.support.RedirectAttributes;
import triduc.com.blog.model.Blog;
import triduc.com.blog.model.Category;
import triduc.com.blog.service.ICategoryService;

import java.util.List;

@Controller
@RequestMapping("/blogs/categories")
public class CategoryController {
    @Autowired
    private ICategoryService categoryService;
    @GetMapping("")
    public String showList(ModelMap model){
        List<Category> categoryList=categoryService.findAll();
        model.addAttribute("categoryList",categoryList);
        return "category/list" ;
    }
    @GetMapping("/update")
    public String showFormUpdate(@RequestParam int id, Model model){
        Category category=categoryService.findById(id);
        model.addAttribute("category",category);
        return "category/update";
    }
    @PostMapping("/update")
    public String update(@ModelAttribute Category category){
        categoryService.save(category);
        return "redirect:/blogs/categories";
    }
    @GetMapping("/create")
    public String showFormCreate(Model model){
        model.addAttribute("category",new Category());
        return "category/create";
    }
    @PostMapping("/create")
    public String save(@ModelAttribute Category category, RedirectAttributes redirectAttributes){
        redirectAttributes.addFlashAttribute("mess","add success");
        categoryService.save(category);
        return "redirect:/blogs/categories";
    }
    @PostMapping("/delete")
    public String delete(@RequestParam int deleteId){
        categoryService.delete(deleteId);
        return "redirect:/blogs/categories";
    }

}
