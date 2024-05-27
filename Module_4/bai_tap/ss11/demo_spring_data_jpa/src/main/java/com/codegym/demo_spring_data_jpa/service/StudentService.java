package com.codegym.demo_spring_data_jpa.service;

import com.codegym.demo_spring_data_jpa.model.Student;
import com.codegym.demo_spring_data_jpa.repository.IStudentRepository;
import dto.StudentInfo;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
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
    public List<StudentInfo> findStudentDtoAll() {
        return studentRepository.findStudentDTO();
    }

    @Override
    public List<Student> searchByName(String name) {
        return studentRepository.searchByName1("%"+name+"%");
    }

    @Override
    public Page<Student> searchByName(String name, Pageable pageable) {
        return studentRepository.findStudentByNameContaining(name, pageable);
    }

    @Override
    public Page<Student> findAll(Pageable pageable) {
        return studentRepository.findAll(pageable);
    }


    @Override
    public Student findById(int id) {
        return studentRepository.findById(id).orElse(null);
    }

    @Override
    public void delete(int id) {
        studentRepository.deleteById(id);
    }

    @Override
    public Student save(Student student){
       return studentRepository.save(student);
    }

    public String getString(String string){
        return string.toUpperCase();
    }
}
