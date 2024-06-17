package triduc.com.final_exam.repository;

import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;
import triduc.com.final_exam.model.Discount;

import java.time.LocalDate;
@Repository
public interface IDiscountRepository extends JpaRepository<Discount, Integer> {
    Page<Discount> findDiscountByLevelOfDiscountContainingIgnoreCase(String levelOfDiscount, Pageable pageable);
}
