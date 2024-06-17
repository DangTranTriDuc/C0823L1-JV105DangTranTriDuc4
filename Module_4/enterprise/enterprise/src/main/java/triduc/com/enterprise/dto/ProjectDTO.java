package triduc.com.enterprise.dto;

import jakarta.validation.constraints.*;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;
import org.springframework.format.annotation.DateTimeFormat;
import org.springframework.validation.Errors;
import org.springframework.validation.Validator;
import triduc.com.enterprise.model.Enterprise;

import java.time.LocalDate;

@Getter
@Setter
@NoArgsConstructor
public class ProjectDTO implements Validator {

    private Long id;

    @NotBlank(message = "Nhập tên mã dự án")
    @Pattern(regexp = "[D][A][-]*(\\d{4})", message = "Sai định dạng, Định dạng đúng là: DA-XXXX")
    private String projectCode;

    @NotNull(message = "Vui lòng chọn doanh nghiệp")
    private Enterprise enterprise;

    @NotBlank(message = "Tên Dự Án không được để trống")
    private String projectName;

    @NotNull(message = "Kinh phí không được để trống")
    @Min(value = 3000, message = "Kinh phí lớn hơn hoặc bằng 3000")
    private Double expense;

    @NotBlank(message = "Mô tả không được để tróng")
    private String description;

    @NotNull(message = "Ngày đăng ký không được để trống")
    @PastOrPresent(message = "Ngày đăng ký không được sau ngày hiện tại")
    @DateTimeFormat(pattern = "yyyy-MM-dd")
    private LocalDate registrationDate;

    @NotNull(message = "Chi phí không được để trống")
    private Double cost;

    @NotNull(message = "Thời gian đăng ký không được để trống")
    @Min(value = 1, message = "Thời gian đăng ký giới thiệu là 1-12 tháng ")
    @Max(value = 12, message = "Thời gian đăng ký giới thiệu là 1-12 tháng ")
    private Double registrationTime;

    @Override
    public boolean supports(Class<?> clazz) {
        return false;
    }

    @Override
    public void validate(Object target, Errors errors) {

    }
}
