package triduc.com.validate_form.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.validation.BindingResult;
import org.springframework.validation.annotation.Validated;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.servlet.mvc.support.RedirectAttributes;
import triduc.com.validate_form.model.User;
import triduc.com.validate_form.service.IUserService;

@Controller
@RequestMapping("/users")
public class UserController {
    @Autowired
    private IUserService userService;
    @GetMapping("")
    public String showFormCreate(Model model){
        model.addAttribute("user",new User());
        return "user/index";
    }
    @PostMapping("/register")
    public String save(@Validated @ModelAttribute User user, BindingResult bindingResult, RedirectAttributes redirectAttributes){

        if (bindingResult.hasErrors()){
            return "user/index";
        }
        userService.save(user);
        redirectAttributes.addFlashAttribute("mess","Add Success");
        return "redirect:/users/register/result";
    }
    @GetMapping("/register/result")
    public String showResultPage() {
        return "user/result";
    }
}
