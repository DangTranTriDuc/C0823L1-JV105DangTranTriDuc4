package triduc.com.enterprise.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;
import org.springframework.web.bind.annotation.RequestParam;
import triduc.com.enterprise.model.Enterprise;
@Repository
public interface IEnterpriseRepository extends JpaRepository<Enterprise,Integer> {

}
