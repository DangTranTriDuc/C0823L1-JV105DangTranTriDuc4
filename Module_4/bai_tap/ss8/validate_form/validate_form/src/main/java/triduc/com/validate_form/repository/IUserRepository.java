package triduc.com.validate_form.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import triduc.com.validate_form.model.User;

public interface IUserRepository extends JpaRepository<User,Integer> {
}
