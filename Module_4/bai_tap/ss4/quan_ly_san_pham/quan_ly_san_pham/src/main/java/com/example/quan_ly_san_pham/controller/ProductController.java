package com.example.quan_ly_san_pham.controller;

import com.example.quan_ly_san_pham.model.Product;
import com.example.quan_ly_san_pham.service.IProductService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.ui.ModelMap;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.servlet.mvc.support.RedirectAttributes;

import java.util.List;

@Controller
@RequestMapping("/products")
public class ProductController {
    @Autowired
    private IProductService productService;

    @GetMapping("")
    public String showList(ModelMap model){
        List<Product> productList=productService.findAll();
        model.addAttribute("productList",productList);
        return "product/list" ;
    }
    @GetMapping("/detail")
    public String detail(@RequestParam(required = false,defaultValue = "3") int id , Model model){
        model.addAttribute("product",productService.findById(id));
        return "product/detail";
    }
    @GetMapping("/create")
    public String showFormCreate(Model model){
        model.addAttribute("product",new Product());
        return "product/create";
    }
    @PostMapping("/create")
    public String save(@ModelAttribute Product product, RedirectAttributes redirectAttributes){
        redirectAttributes.addFlashAttribute("mess","add success");
        productService.save(product);
        return "redirect:/products";
    }
    @PostMapping("/search")
    public String search(@RequestParam String searchName, Model model){
        List<Product> productList=productService.findProductByNameContaining(searchName);
        model.addAttribute("productList",productList);
        return "product/list";
    }
    @GetMapping("/update")
    public String showFormUpdate(@RequestParam int id, Model model){
        Product product=productService.findById(id);
        model.addAttribute("product",product);
        return "product/update" ;
    }
    @PostMapping("/update")
    public String update(@ModelAttribute Product product){
        productService.save(product);
        return "redirect:/products";
    }
    @PostMapping("/delete")
    public String delete(@RequestParam int deleteId){
        productService.delete(deleteId);
        return "redirect:/products";
    }
}
