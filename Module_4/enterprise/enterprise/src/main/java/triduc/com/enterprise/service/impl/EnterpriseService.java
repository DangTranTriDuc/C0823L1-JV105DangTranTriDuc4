package triduc.com.enterprise.service.impl;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import triduc.com.enterprise.model.Enterprise;
import triduc.com.enterprise.repository.IEnterpriseRepository;
import triduc.com.enterprise.service.IEnterpriseService;

import java.util.List;
@Service
public class EnterpriseService implements IEnterpriseService {
    @Autowired
    private IEnterpriseRepository enterpriseRepository;
    @Override
    public List<Enterprise> getAll() {
        return enterpriseRepository.findAll();
    }
}
