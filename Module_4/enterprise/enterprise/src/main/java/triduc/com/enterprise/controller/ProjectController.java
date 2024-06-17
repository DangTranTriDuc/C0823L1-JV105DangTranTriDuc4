package triduc.com.enterprise.controller;

import org.springframework.beans.BeanUtils;
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
import triduc.com.enterprise.dto.ProjectDTO;
import triduc.com.enterprise.model.Project;
import triduc.com.enterprise.service.IEnterpriseService;
import triduc.com.enterprise.service.IProjectService;

@Controller
@RequestMapping("/projects")
public class ProjectController {
    @Autowired
    private IEnterpriseService enterpriseService;
    @Autowired
    private IProjectService projectService;

    @GetMapping("")
    public String showList(@RequestParam(required = false, defaultValue = "0") int page,
                           @RequestParam(required = false, defaultValue = "") String searchProjectName,
                           @RequestParam(required = false, defaultValue = "") String searchEnterpriseName,
                           ModelMap model) {
        Sort sort = Sort.by("projectName").ascending();
        Pageable pageable = PageRequest.of(page, 2, sort);
        Page<Project> projectPage = projectService.findProjectByProjectNameContainingIgnoreCaseAndEnterprise_EnterpriseNameContainingIgnoreCase(searchProjectName, searchEnterpriseName, pageable);
        model.addAttribute("projectPage", projectPage);
        model.addAttribute("searchProjectName", searchProjectName);
        model.addAttribute("searchEnterpriseName", searchEnterpriseName);
        model.addAttribute("enterpriseList", enterpriseService.getAll());
        return "project/list";
    }

    @GetMapping("/detail")
    public String detail(@RequestParam(required = false, defaultValue = "1") int id, Model model) {
        model.addAttribute("project", projectService.findById(id));
        model.addAttribute("projectList", projectService.findAll());
        model.addAttribute("enterpriseList", enterpriseService.getAll());
        return "project/detail";
    }

    @GetMapping("/update")
    public String showFormUpdate(@RequestParam int id, Model model) {
        model.addAttribute("projectDTO", projectService.findById(id));
        model.addAttribute("enterpriseList", enterpriseService.getAll());
        return "project/update";
    }

    @PostMapping("/update")
    public String update(@Validated @ModelAttribute ProjectDTO projectDTO,
                         BindingResult bindingResult,
                         RedirectAttributes redirectAttributes,
                         Model model) {
        Project targetProject = new Project();
        if (bindingResult.hasErrors()) {
            model.addAttribute("enterpriseList", enterpriseService.getAll());
            return "project/update";
        }
        BeanUtils.copyProperties(projectDTO, targetProject);
        projectService.save(targetProject);
        redirectAttributes.addFlashAttribute("mess", "add success");
        return "redirect:/projects";
    }


    @GetMapping("/create")
    public String showFormCreate(Model model) {
        model.addAttribute("projectDTO", new ProjectDTO());
        model.addAttribute("enterpriseList", enterpriseService.getAll());
        return "project/create";
    }

    @PostMapping("/create")
    public String save(@Validated @ModelAttribute ProjectDTO projectDTO,
                       BindingResult bindingResult,
                       RedirectAttributes redirectAttributes,
                       Model model) {
        Project targetProject = new Project();
        model.addAttribute("enterpriseList", enterpriseService.getAll());
        if (bindingResult.hasErrors()) {
            return "project/create";
        }
        BeanUtils.copyProperties(projectDTO, targetProject);
        projectService.save(targetProject);
        redirectAttributes.addFlashAttribute("mess", "add success");
        return "redirect:/projects";
    }

    @PostMapping("/delete")
    public String delete(@RequestParam int deleteId) {
        projectService.delete(deleteId);
        return "redirect:/projects";
    }
}















