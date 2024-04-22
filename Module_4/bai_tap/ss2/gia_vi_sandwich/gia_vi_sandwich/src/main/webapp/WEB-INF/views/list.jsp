<%--
  Created by IntelliJ IDEA.
  User: ADMIN
  Date: 4/22/2024
  Time: 6:40 PM
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<html>
<head>
    <title>List</title>
</head>
<body>
<h1>Danh sách SandWich</h1>
<a href="/sandwich/create">Thêm mới Sandwich</a>
<table>
    <tr>
        <th>STT</th>
        <th>Name</th>
        <th>Condiments</th>
    </tr>
    <c:forEach items="${sandwichList}" var="sandwich" varStatus="status">
        <tr>
            <td>${status.count}</td>
            <td>${sandwich.name}</td>
            <td>
                <c:forEach items="${sandwich.getCondiment()}" var="condiment">
                    <span>${condiment}</span>
                </c:forEach>
            </td>
        </tr>
    </c:forEach>
</table>
</body>
</html>
