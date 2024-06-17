package triduc.com.final_exam.service;

import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import triduc.com.final_exam.model.Discount;

import java.time.LocalDate;
import java.util.List;

public interface IDiscountService {
    List<Discount> findAll();

    Page<Discount> findDiscountByLevelOfDiscountContainingIgnoreCase(String levelOfDiscount,Pageable pageable);

    boolean save(Discount discount);

    void delete(int id);

    Discount findById(int id);
}
