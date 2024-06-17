package triduc.com.enterprise.service.impl;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.stereotype.Service;
import triduc.com.enterprise.model.Project;
import triduc.com.enterprise.repository.IProjectRepository;
import triduc.com.enterprise.service.IProjectService;

import java.util.List;
@Service
public class ProjectService implements IProjectService {
    @Autowired
    private IProjectRepository projectRepository;
    @Override
    public List<Project> findAll() {
        return projectRepository.findAll();
    }

    @Override
    public Page<Project> findProjectByProjectNameContainingIgnoreCaseAndEnterprise_EnterpriseNameContainingIgnoreCase(String projectName, String enterpriseName, Pageable pageable) {
        return projectRepository.findProjectByProjectNameContainingIgnoreCaseAndEnterprise_EnterpriseNameContainingIgnoreCase(projectName,enterpriseName,pageable);
    }

    @Override
    public boolean save(Project project) {
        return projectRepository.save(project)!=null;
    }

    @Override
    public void deleteByProjectName(String projectCode) {
        projectRepository.deleteProjectByProjectCodeContainingIgnoreCase(projectCode);
    }
    @Override
    public Project findByProjectCode(String projectCode) {
        return projectRepository.findProjectByProjectCodeContainingIgnoreCase(projectCode);
    }

    @Override
    public void delete(int id) {
        projectRepository.deleteById(id);
    }

    @Override
    public Project findById(int id) {
        return projectRepository.findById(id).get();
    }
}
