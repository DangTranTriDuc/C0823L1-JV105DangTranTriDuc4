package triduc.com.luu_giu_cau_hinh_hom_thu.service;

import triduc.com.luu_giu_cau_hinh_hom_thu.model.Email;

public interface IEmailService {
    Email findAll();

    void save(Email email);

}
