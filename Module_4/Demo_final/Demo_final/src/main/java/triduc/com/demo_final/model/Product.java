package triduc.com.demo_final.model;

import jakarta.persistence.*;
import jakarta.validation.constraints.*;
import lombok.Data;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;
import org.springframework.format.annotation.DateTimeFormat;
import triduc.com.demo_final.validation.SpecialCharacterConstraint;

import java.time.LocalDate;

@Entity
@Getter
@Setter
@NoArgsConstructor
public class Product {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;

    //    @SpecialCharacterConstraint(message = "Không được sử dụng ký tự đặc biệt")
    @NotBlank(message = "Tên sản phẩm không được để khoảng trắng")
    @NotEmpty(message = "Tên sản phẩm không được để trống")
    private String productName;

    //    @SpecialCharacterConstraint(message = "Không được sử dụng ký tự đặc biệt")
    @NotBlank(message = "Mô tả phẩm không được để khoảng trắng")
    @NotEmpty(message = "Mô tả sản phẩm không được để trống")
    private String description;

    @DecimalMin(value = "1", message = "Giá sản phẩm phải lớn hơn hoặc bằng 1")
    private float price;

    @DecimalMin(value = "1", message = "Số lượng sản phẩm phải lớn hơn hoặc bằng 1")
    private int quantity;

    @ManyToOne
    @JoinColumn(name = "manufacture_id")
    private Manufacture manufacture;

    @ManyToOne
    @JoinColumn(name = "category_id")
    private Category category;

    //    @SpecialCharacterConstraint(message = "Không được sử dụng ký tự đặc biệt")
    @NotEmpty(message = "Màu sắc sản phẩm không được để trống")
    @NotBlank(message = "Màu sắc phẩm không được để khoảng trắng")
    private String color;

    @NotNull(message = "Ngày sản xuất sản phẩm không được để trống")
    @PastOrPresent(message = "Ngày sản xuất sản phẩm không được sau ngày hiện tại")
    @DateTimeFormat(pattern = "yyyy-MM-dd")
    private LocalDate manufactureDate ;
}