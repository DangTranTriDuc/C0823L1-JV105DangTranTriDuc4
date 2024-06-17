package triduc.com.final_exam.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.stereotype.Service;
import triduc.com.final_exam.model.Discount;
import triduc.com.final_exam.repository.IDiscountRepository;

import java.time.LocalDate;
import java.util.List;

@Service
public class DiscountService implements IDiscountService {
    @Autowired
    private IDiscountRepository discountRepository;

    @Override
    public List<Discount> findAll() {
        return discountRepository.findAll();
    }

    @Override
    public Page<Discount> findDiscountByLevelOfDiscountContainingIgnoreCase(String levelOfDiscount, Pageable pageable) {
        return discountRepository.findDiscountByLevelOfDiscountContainingIgnoreCase(levelOfDiscount, pageable);
    }


    @Override
    public boolean save(Discount discount) {
        return discountRepository.save(discount) != null;
    }

    @Override
    public void delete(int id) {
        discountRepository.deleteById(id);
    }

    @Override
    public Discount findById(int id) {
        return discountRepository.findById(id).get();
    }
}
