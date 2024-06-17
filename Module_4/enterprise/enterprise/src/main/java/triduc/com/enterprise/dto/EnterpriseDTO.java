package triduc.com.enterprise.dto;

import jakarta.validation.constraints.NotBlank;
import jakarta.validation.constraints.Pattern;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;
import org.springframework.validation.Errors;
import org.springframework.validation.Validator;
import triduc.com.enterprise.model.Project;

import java.util.List;

@Getter
@Setter
@NoArgsConstructor
public class EnterpriseDTO implements Validator {
    private Long id;

    @NotBlank(message = "Tên Doanh nghiệp không được để trống")
    private String enterpriseName;

    @NotBlank(message = "Lĩnh vực doanh nghiệp không được để trống")
    private String businessField;

    @NotBlank(message = "Số điện thoại không được để trống")
    @Pattern(regexp = "^[0-9]{10}$", message = "Sai định dạng, Định dạng đúng là:0123456789")
    private String phoneNumber;

    @NotBlank(message = "Email không được để trống")
    @Pattern(regexp = "^\\w+([.-]?\\w+)*@\\w+([.-]?\\w+)*(\\.\\w+)+$", message = "Sai định dạng, Định dạng đúng là:example@example.com")
    private String email;

    private List<Project> projects;

    @Override
    public boolean supports(Class<?> clazz) {
        return false;
    }

    @Override
    public void validate(Object target, Errors errors) {

    }
}
