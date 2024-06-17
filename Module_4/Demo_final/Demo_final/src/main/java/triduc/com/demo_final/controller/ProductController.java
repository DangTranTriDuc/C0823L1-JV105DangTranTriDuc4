package triduc.com.demo_final.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageRequest;
import org.springframework.data.domain.Pageable;
import org.springframework.data.domain.Sort;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.ui.ModelMap;
import org.springframework.validation.BindingResult;
import org.springframework.validation.annotation.Validated;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.servlet.mvc.support.RedirectAttributes;
import triduc.com.demo_final.dto.ProductDTO;
import triduc.com.demo_final.model.Product;
import triduc.com.demo_final.service.ICategoryService;
import triduc.com.demo_final.service.IManufactureService;
import triduc.com.demo_final.service.IProductService;

import java.util.List;

@Controller
@RequestMapping("/products")
public class ProductController {
    @Autowired
    private IProductService productService;
    @Autowired
    private ICategoryService categoryService;
    @Autowired
    private IManufactureService manufactureService;

    @GetMapping("/dto")
    public String showList(ModelMap model) {
        List<ProductDTO> productList = productService.findAllProductDTO();
        model.addAttribute("productList", productList);
        return"product/list";
    }

    @GetMapping("")
    public String showList(@RequestParam(required = false, defaultValue = "0") int page,
                           @RequestParam(required = false, defaultValue = "") String searchProductName,
                           @RequestParam(required = false, defaultValue = "") String searchManufacture,
                           ModelMap model) {
        Sort sort = Sort.by("productName").ascending();
        Pageable pageable = PageRequest.of(page, 2, sort);
        Page<Product> productPage = productService.findProductByNameAndManufactureContaining(searchProductName, searchManufacture, pageable);
        model.addAttribute("productPage", productPage);
        model.addAttribute("searchProductName", searchProductName);
        model.addAttribute("searchManufacture", searchManufacture);
        model.addAttribute("manufactureList",manufactureService.findAll());
        return "product/list";
    }

    @GetMapping("/detail")
    public String detail(@RequestParam(required = false, defaultValue = "1") int id, Model model) {
        model.addAttribute("product", productService.findById(id));
        model.addAttribute("categoryList", categoryService.findAll());
        model.addAttribute("manufactureList", manufactureService.findAll());
        return "product/detail";
    }

    @GetMapping("/update")
    public String showFormUpdate(@RequestParam int id, Model model) {
        model.addAttribute("product", productService.findById(id));
        model.addAttribute("categoryList", categoryService.findAll());
        model.addAttribute("manufactureList", manufactureService.findAll());
        return "product/update";
    }

    @PostMapping("/update")
        public String update(@Validated @ModelAttribute Product product , BindingResult bindingResult,RedirectAttributes redirectAttributes,Model model) {
        model.addAttribute("categoryList", categoryService.findAll());
        model.addAttribute("manufactureList", manufactureService.findAll());
        if(bindingResult.hasErrors()){
            return "product/update";
        }
        productService.save(product);
        redirectAttributes.addFlashAttribute("mess","Add Success");
        return "redirect:/products";
    }

    @GetMapping("/create")
    public String showFormCreate(Model model) {
        model.addAttribute("product", new Product());
        model.addAttribute("categoryList", categoryService.findAll());
        model.addAttribute("manufactureList", manufactureService.findAll());
        return "product/create";
    }

    @PostMapping("/create")
    public String save(@Validated @ModelAttribute Product product, BindingResult bindingResult,RedirectAttributes redirectAttributes, Model model) {
        model.addAttribute("categoryList", categoryService.findAll());
        model.addAttribute("manufactureList", manufactureService.findAll());
        if(bindingResult.hasErrors()){
            return "product/create";
        }
        redirectAttributes.addFlashAttribute("mess", "add success");
        productService.save(product);
        return "redirect:/products";
    }

    @PostMapping("/delete")
    public String delete(@RequestParam int deleteId) {
        productService.delete(deleteId);
        return "redirect:/products";
    }
}