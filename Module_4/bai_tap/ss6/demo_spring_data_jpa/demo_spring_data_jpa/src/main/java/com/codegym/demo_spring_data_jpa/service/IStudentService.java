package com.codegym.demo_spring_data_jpa.service;

import com.codegym.demo_spring_data_jpa.model.Student;

import java.util.List;

public interface IStudentService {
    List<Student> findAll();
    List<Student> searchByName(String name);
    Student findById(int id);
    boolean save(Student student);
}
