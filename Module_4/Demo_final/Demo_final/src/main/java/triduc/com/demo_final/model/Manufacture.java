package triduc.com.demo_final.model;

import jakarta.persistence.*;
import lombok.Data;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

import java.util.List;

@Entity
@Getter
@Setter
@NoArgsConstructor
public class Manufacture {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long manufactureId ;
    private String manufactureName;

    @OneToMany(mappedBy = "manufacture")
    private List<Product> products;


}
