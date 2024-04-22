package triduc.com.gia_vi_sandwich.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.ui.ModelMap;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.servlet.mvc.support.RedirectAttributes;
import triduc.com.gia_vi_sandwich.model.Sandwich;
import triduc.com.gia_vi_sandwich.service.ISandwichService;

import java.util.List;

@Controller
@RequestMapping("/sandwich")
public class SandwichController {
    @Autowired
    private ISandwichService sandwichService;

    @ModelAttribute("condiments")
    public String[] getListCondiments() {
        return new String[]{"Lettuce", "Tomato", "Mustard", "Sprouts"};
    }
    @GetMapping("")
    public String showList(ModelMap model){
        List<Sandwich> sandwichList=sandwichService.findAll();
        model.addAttribute("sandwichList",sandwichList);
        return "list";
    }
    @GetMapping("/create")
    public String showFormCrate(Model model){
        model.addAttribute("sandwich",new Sandwich());
        return "create";
    }
    @PostMapping("/create")
    public String save(@ModelAttribute Sandwich sandwich){
        sandwichService.save(sandwich);
        return "redirect:/sandwich";
    }
}
