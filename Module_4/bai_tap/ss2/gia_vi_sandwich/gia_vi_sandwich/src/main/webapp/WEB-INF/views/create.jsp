<%@ taglib prefix="form" uri="http://www.springframework.org/tags/form" %>
<%--
  Created by IntelliJ IDEA.
  User: ADMIN
  Date: 4/22/2024
  Time: 6:55 PM
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<html>
<head>
    <title>Create</title>
</head>
<body>
<form:form action="/sandwich/create" method="post" modelAttribute="sandwich">
    Name:
    <form:input path="name"/> <br>
    Condiments:
    <form:checkboxes path="condiment" items="${condiments}"/> <br>
    <form:button>Save</form:button>
</form:form>
</body>
</html>
