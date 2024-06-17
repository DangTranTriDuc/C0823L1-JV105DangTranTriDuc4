package triduc.com.enterprise.service;

import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import triduc.com.enterprise.model.Project;

import java.util.List;

public interface IProjectService {
    List<Project> findAll();
    Page<Project> findProjectByProjectNameContainingIgnoreCaseAndEnterprise_EnterpriseNameContainingIgnoreCase(String projectName, String enterpriseName, Pageable pageable);
    boolean save(Project project);
    void deleteByProjectName(String projectCode);
    Project findByProjectCode(String projectCode);
    void delete(int id );
    Project findById(int id);

}
