package triduc.com.validate_form.service;

import triduc.com.validate_form.model.User;

import java.util.List;

public interface IUserService {
    List<User> findAll();
    boolean save(User user);

}
