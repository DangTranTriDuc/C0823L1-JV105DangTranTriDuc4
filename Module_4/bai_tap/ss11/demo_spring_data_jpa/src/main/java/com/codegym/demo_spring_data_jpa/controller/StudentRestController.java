package com.codegym.demo_spring_data_jpa.controller;


import com.codegym.demo_spring_data_jpa.dto.StudentDTO;
import com.codegym.demo_spring_data_jpa.model.Student;
import com.codegym.demo_spring_data_jpa.service.IStudentService;
import org.springframework.beans.BeanUtils;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageRequest;
import org.springframework.data.domain.Pageable;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@CrossOrigin("*")
@RequestMapping("v1/api/students")
public class StudentRestController {
    @Autowired
    private IStudentService studentService;

    @GetMapping("")
    public ResponseEntity<Page<Student>> getAll(@RequestParam(defaultValue = "0", required = false) int page) {
        Pageable pageable = PageRequest.of(page,2);
        Page<Student> studentPage = studentService.findAll(pageable);
        if (studentPage.isEmpty()) {
            return new ResponseEntity<>(HttpStatus.NO_CONTENT); // 204
        }
        return new ResponseEntity<>(studentPage, HttpStatus.OK); // 200;
    }

//    @GetMapping("")
//    public ResponseEntity<List<Student>> getAll() {
//        List<Student> studentList = studentService.findAll();
//        if (studentList.isEmpty()) {
//            return new ResponseEntity<>(HttpStatus.NO_CONTENT); // 204
//        }
//        return new ResponseEntity<>(studentList, HttpStatus.OK); // 200;
//    }

    @GetMapping("/{id}")
    public ResponseEntity<Student> detail(@PathVariable("id") int id) {
        Student student = studentService.findById(id);
        if (student == null) {
            return new ResponseEntity<>(HttpStatus.NOT_FOUND); // 404
        }
        return new ResponseEntity<>(student, HttpStatus.OK); // 200;
    }


    @PostMapping("")
    public ResponseEntity<?> save(@RequestBody StudentDTO studentDTO) {
        // validate dữ liệu
        // nếu không hợp lệ => trả về người dùng Map<field, mess> + 400
        // Nếu ok
        Student student = new Student();
        BeanUtils.copyProperties(studentDTO, student);
        studentService.save(student);
        return new ResponseEntity<>(HttpStatus.CREATED);
    }

    @PatchMapping("/{id}")
    public ResponseEntity<?> update(@PathVariable int id,@RequestBody StudentDTO studentDTO) {
        Student student = studentService.findById(id);
        if (student == null) {
            return new ResponseEntity<>(HttpStatus.NOT_FOUND); // 404
        }
        BeanUtils.copyProperties(studentDTO, student);
        studentService.save(student);
        return new ResponseEntity<>(HttpStatus.NO_CONTENT);
    }
}
