package triduc.com.chuyen_doi_tien_te.controller;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

@Controller
public class ConvertController {
    @GetMapping(value = "/")
    public String showConverterForm() {
        return "convert";
    }

    @PostMapping(value = "/convert")
    public String convertCurrency(@RequestParam("usdAmount") double usdAmount,
                                  Model model) {
        double vndAmount = 25000 * usdAmount;
        model.addAttribute("vndAmount", vndAmount);
        return "convert";
    }
}
