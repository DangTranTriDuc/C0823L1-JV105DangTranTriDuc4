package com.codegym.demo_spring_data_jpa.model;

import jakarta.persistence.*;

import java.util.List;

@Entity
public class Classes {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private int id;
    private String name;
    @OneToMany(mappedBy = "classes")
    private List<Student> studentList;
}
