package triduc.com.validate_form.model;

import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.validation.constraints.Min;
import jakarta.validation.constraints.NotBlank;
import jakarta.validation.constraints.NotEmpty;
import jakarta.validation.constraints.Size;
import lombok.Data;
import lombok.Getter;
import lombok.Setter;
import triduc.com.validate_form.Validation.EmailConstraint;
import triduc.com.validate_form.Validation.PhoneNumberConstraint;
@Data
@Entity
public class User {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private int id;
    @NotEmpty(message = "Không được để trống")
    @Size(min = 3, max = 45, message = "Độ dài của Firstname phải từ 3 đến 45 ký tự")
    private String firstName;

    @Size(min = 3, max = 45, message = "Độ dài của Lastname phải từ 3 đến 45 ký tự")
    private String lastName;

    @PhoneNumberConstraint(message = "Phone Number không hợp lệ")
    private String phoneNumber;

    @Min(value = 18, message = "Tuổi phải lớn hơn hoặc bằng 18")
    private int age;

    @EmailConstraint(message = "Email không hợp lệ")
    private String email;




}
