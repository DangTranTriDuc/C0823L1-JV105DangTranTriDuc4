package triduc.com.enterprise.model;

import jakarta.persistence.*;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

import java.util.List;

@Entity
@Getter
@Setter
@NoArgsConstructor
public class Enterprise {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;
    private String enterpriseName;
    private String businessField ;
    private String phoneNumber ;
    private String email;
    @OneToMany(mappedBy = "enterprise")
    private List<Project> projects;
}
