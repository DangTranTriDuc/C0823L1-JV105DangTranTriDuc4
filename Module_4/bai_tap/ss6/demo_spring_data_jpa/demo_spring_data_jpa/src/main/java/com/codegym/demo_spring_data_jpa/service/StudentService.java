package com.codegym.demo_spring_data_jpa.service;

import com.codegym.demo_spring_data_jpa.model.Student;
import com.codegym.demo_spring_data_jpa.repository.IStudentRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class StudentService implements IStudentService{
    @Autowired
    private IStudentRepository studentRepository;
    @Override
    public List<Student> findAll() {
        return studentRepository.findAll();
    }

    @Override
    public List<Student> searchByName(String name) {
        return studentRepository.searchByName1("%"+name+"%");
    }

    @Override
    public Student findById(int id) {
        return studentRepository.findById(id).get();
    }

    @Override
    public boolean save(Student student) {
        return studentRepository.save(student)!=null;
    }
}
