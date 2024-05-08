package com.codegym.demo_spring_data_jpa.repository;



import com.codegym.demo_spring_data_jpa.model.Student;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;

import java.util.List;

public interface IStudentRepository extends JpaRepository<Student,Integer> {
 List<Student> findStudentByNameContaining(String name);

 @Query(value = "SELECT * FROM student where name like :searchName",nativeQuery = true)

 List<Student> searchByName1(@Param("searchName") String name);


}
