package triduc.com.luu_giu_cau_hinh_hom_thu.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import triduc.com.luu_giu_cau_hinh_hom_thu.model.Email;
import triduc.com.luu_giu_cau_hinh_hom_thu.service.IEmailService;

@Controller
@RequestMapping("/email")
public class EmailController {
    @Autowired
    private IEmailService emailService;

    @GetMapping("")
    public String showBox(Model model) {
        Email email = emailService.findAll();
        model.addAttribute("email", email);
        return "box";
    }

    @GetMapping("/update")
    public String showUpdate(Model model) {
        Email email = emailService.findAll();
        model.addAttribute("email", email);
        model.addAttribute("languages", new java.lang.String[]{"English", "Vietnamese", "Japanese", "Chinese"});
        model.addAttribute("size", new int[]{5, 10, 15, 25, 50, 100});
        return "setting";
    }
    @PostMapping("/update")
    public String update(@ModelAttribute("email") Email email){
        emailService.save(email);
        return "redirect:/email";
    }

}

