package triduc.com.demo_final.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;
import triduc.com.demo_final.model.Manufacture;

public interface IManufactureRepository extends JpaRepository<Manufacture,Integer> {
}
