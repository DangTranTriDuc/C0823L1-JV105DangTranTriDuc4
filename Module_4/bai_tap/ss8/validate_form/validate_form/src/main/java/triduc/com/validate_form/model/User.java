package triduc.com.validate_form.model;

import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.validation.constraints.Min;
import jakarta.validation.constraints.Size;
import triduc.com.validate_form.Validation.EmailConstraint;
import triduc.com.validate_form.Validation.PhoneNumberConstraint;

@Entity
public class User {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private int id;

    @Size(min = 5, max = 45, message = "Độ dài của Firstname phải từ 5 đến 45 ký tự")
    private String firstName;

    @Size(min = 5, max = 45, message = "Độ dài của Lastname phải từ 5 đến 45 ký tự")
    private String lastName;

    @PhoneNumberConstraint(message = "Phone Number không hợp lệ")
    private String phoneNumber;

    @Min(value = 18, message = "Tuổi phải lớn hơn hoặc bằng 18")
    private int age;

    @EmailConstraint(message = "Email không hợp lệ")
    private String email;

    public User() {
    }

    public User(int id, String firstName, String lastName, int age, String email, String phoneNumber) {
        this.id = id;
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
        this.email = email;
        this.phoneNumber = phoneNumber;
    }

    public int getId() {
        return id;
    }

    public String getFirstName() {
        return firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public int getAge() {
        return age;
    }

    public String getEmail() {
        return email;
    }

    public String getPhoneNumber() {
        return phoneNumber;
    }
}
