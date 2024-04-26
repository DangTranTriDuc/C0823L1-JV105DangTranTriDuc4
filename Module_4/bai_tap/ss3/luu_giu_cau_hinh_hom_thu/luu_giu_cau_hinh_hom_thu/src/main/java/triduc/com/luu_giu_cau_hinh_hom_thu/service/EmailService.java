package triduc.com.luu_giu_cau_hinh_hom_thu.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import triduc.com.luu_giu_cau_hinh_hom_thu.model.Email;
import triduc.com.luu_giu_cau_hinh_hom_thu.repository.IEmailRepository;

@Service
public class EmailService implements IEmailService{
    @Autowired
    public IEmailRepository emailRepository ;
    @Override
    public Email findAll() {
        return emailRepository.findAll();
    }

    @Override
    public void save(Email email) {
        emailRepository.save(email);
    }
}
