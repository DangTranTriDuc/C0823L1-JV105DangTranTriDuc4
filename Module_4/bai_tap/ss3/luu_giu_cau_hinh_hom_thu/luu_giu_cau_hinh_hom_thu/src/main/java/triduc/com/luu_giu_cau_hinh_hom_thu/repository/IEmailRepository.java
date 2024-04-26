package triduc.com.luu_giu_cau_hinh_hom_thu.repository;

import triduc.com.luu_giu_cau_hinh_hom_thu.model.Email;

public interface IEmailRepository {
    Email findAll();

    void save(Email email);

}
