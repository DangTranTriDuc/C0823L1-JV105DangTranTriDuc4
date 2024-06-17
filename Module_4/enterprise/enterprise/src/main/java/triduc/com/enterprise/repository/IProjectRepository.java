package triduc.com.enterprise.repository;

import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;
import triduc.com.enterprise.dto.ProjectDTO;
import triduc.com.enterprise.model.Project;

import java.util.List;
@Repository
public interface IProjectRepository extends JpaRepository<Project,Integer> {
    Page<Project> findProjectByProjectNameContainingIgnoreCaseAndEnterprise_EnterpriseNameContainingIgnoreCase(String projectName, String enterpriseName, Pageable pageable);
//    List<ProjectDTO> findAllProjectDTO();
    void deleteProjectByProjectCodeContainingIgnoreCase(String projectCode);
    Project findProjectByProjectCodeContainingIgnoreCase(String projectCode);


}
