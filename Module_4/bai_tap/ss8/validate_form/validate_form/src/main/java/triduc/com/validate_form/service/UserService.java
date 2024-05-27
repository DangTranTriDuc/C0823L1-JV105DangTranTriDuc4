package triduc.com.validate_form.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import triduc.com.validate_form.model.User;
import triduc.com.validate_form.repository.IUserRepository;

import java.util.List;

@Service
public class UserService implements IUserService {
    @Autowired
    private IUserRepository userRepository;

    @Override
    public List<User> findAll() {
        return userRepository.findAll()  ;
    }

    @Override
    public boolean save(User user) {
        return userRepository.save(user)!=null;
    }
}
