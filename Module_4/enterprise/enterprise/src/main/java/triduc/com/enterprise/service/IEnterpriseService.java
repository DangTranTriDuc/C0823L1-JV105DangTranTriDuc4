package triduc.com.enterprise.service;

import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import triduc.com.enterprise.model.Enterprise;
import triduc.com.enterprise.model.Project;

import java.util.List;

public interface IEnterpriseService {
    List<Enterprise> getAll();
}
