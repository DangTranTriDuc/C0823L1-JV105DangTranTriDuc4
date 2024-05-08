package com.codegym.demo_spring_data_jpa.model;

import jakarta.persistence.*;

import java.util.List;

@Entity
//@Table(name = "sinh_vien")
public class Student {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private int id;
    private int gender;
//    @Column(name = "ten",columnDefinition = "Date")
    private String name;


    @OneToOne
    @JoinColumn(name = "s_username")
    private Jame jame;

    @ManyToOne
    @JoinColumn(name = "class_id")
    private Classes classes;


    @ManyToMany
    @JoinTable(name = "student_subject",
    joinColumns =@JoinColumn(name = "student_id"),
     inverseJoinColumns = @JoinColumn(name ="subject_id"),
            uniqueConstraints = @UniqueConstraint(columnNames = {"student_id","subject_id"})
    )
    private List<Subject> subjectList;

    public Student() {
    }

    public Student(int id, String name) {
        this.id = id;
        this.name = name;
    }

}
