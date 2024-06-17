package triduc.com.final_exam.controller;

import org.springframework.beans.BeanUtils;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageRequest;
import org.springframework.data.domain.Pageable;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.ui.ModelMap;
import org.springframework.validation.BindingResult;
import org.springframework.validation.annotation.Validated;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.servlet.mvc.support.RedirectAttributes;
import triduc.com.final_exam.dto.DiscountDTO;
import triduc.com.final_exam.model.Discount;
import triduc.com.final_exam.service.IDiscountService;

import java.time.LocalDate;

@Controller
@RequestMapping("discounts")
public class DiscountController {
    @Autowired
    private IDiscountService discountService;

    @GetMapping("")
    public String showList(@RequestParam(required = false, defaultValue = "0") int page,
                           @RequestParam(required = false, defaultValue = "") String searchLevelOfDiscount,
                           @RequestParam(required = false, defaultValue = "") String searchStartTime,
                           @RequestParam(required = false, defaultValue = "") String searchEndTime,
                           ModelMap model) {
        Pageable pageable = PageRequest.of(page, 2);
        Page<Discount> discountPage = discountService.findDiscountByLevelOfDiscountContainingIgnoreCase(searchLevelOfDiscount, pageable);
        model.addAttribute("discountPage", discountPage);
        model.addAttribute("searchLevelOfDiscount", searchLevelOfDiscount);
        model.addAttribute("searchStartTime", searchStartTime);
        model.addAttribute("searchEndTime", searchEndTime);
        return "discount/list";
    }

    @PostMapping ("/update")
    public String update(@Validated @ModelAttribute DiscountDTO discountDTO,
                         BindingResult bindingResult,
                         RedirectAttributes redirectAttributes) {
        Discount targetDiscount = new Discount();
        if (bindingResult.hasErrors()) {
            return "discount/update";
        }
        BeanUtils.copyProperties(discountDTO, targetDiscount);
        discountService.save(targetDiscount);
        redirectAttributes.addFlashAttribute("mess", "success");
        return "redirect:/discounts";
    }
    @GetMapping("/update")
    public String showFormUpdate(@RequestParam int id, Model model){
        model.addAttribute("discountDTO",discountService.findById(id));
        return "discount/update";
    }
    @PostMapping("/create")
    public String save(@Validated @ModelAttribute DiscountDTO discountDTO,
                         BindingResult bindingResult,
                         RedirectAttributes redirectAttributes) {
        Discount targetDiscount = new Discount();
        if (bindingResult.hasErrors()) {
            return "discount/create";
        }
        BeanUtils.copyProperties(discountDTO, targetDiscount);
        discountService.save(targetDiscount);
        redirectAttributes.addFlashAttribute("mess", "success");
        return "redirect:/discounts";
    }
    @GetMapping("create")
    public String showFormUpdate(Model model){
        model.addAttribute("discountDTO",new DiscountDTO());
        return "discount/create";
    }
    @PostMapping("/delete")
    public String delete(@RequestParam int deleteId){
        discountService.delete(deleteId);
        return "redirect:/discounts";
    }
}
