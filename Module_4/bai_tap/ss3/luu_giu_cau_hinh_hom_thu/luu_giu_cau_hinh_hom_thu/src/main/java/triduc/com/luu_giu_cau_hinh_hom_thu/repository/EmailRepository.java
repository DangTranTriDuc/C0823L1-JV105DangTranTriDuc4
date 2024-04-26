package triduc.com.luu_giu_cau_hinh_hom_thu.repository;

import org.springframework.stereotype.Repository;
import triduc.com.luu_giu_cau_hinh_hom_thu.model.Email;
@Repository
public class EmailRepository implements IEmailRepository{
    private static Email email=new Email("English",5,true,"aaa");

    @Override
    public Email findAll() {
        return email;
    }

    @Override
    public void save(Email email) {
        this.email=email;
    }
}
