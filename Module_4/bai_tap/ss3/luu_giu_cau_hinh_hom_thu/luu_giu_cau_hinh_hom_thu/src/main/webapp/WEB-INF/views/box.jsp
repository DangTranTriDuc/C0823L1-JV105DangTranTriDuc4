<%--
  Created by IntelliJ IDEA.
  User: ADMIN
  Date: 4/26/2024
  Time: 6:52 PM
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>Title</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet"
          integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js"
            integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz"
            crossorigin="anonymous"></script>
</head>
<body>
<h1>Chương trình cấu hình hòm thư điện tử</h1>
<table>
    <tr>
        <td>Languages:</td>
        <td>${email.languages}</td>
    </tr>
    <tr>
        <td>Page Size:</td>
        <td>${email.pageSize}</td>
    </tr>
    <tr>
        <td>Spams filter:</td>
        <td>${email.spamFilter}</td>
    </tr>
    <tr>
        <td>Signature:</td>
        <td>${email.signature}</td>
    </tr>
</table>
<a href="/email/update" class="btn btn-primary" style="margin-top: 20px">Update</a>
</body>
</html>
