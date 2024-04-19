<%--
  Created by IntelliJ IDEA.
  User: ADMIN
  Date: 4/19/2024
  Time: 7:08 PM
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>USD to VND Converter</title>
</head>
<body>
<h1>USD to VND Converter</h1>

<form action="convert" method="post">
    <label for="usdAmount">USD Amount:</label>
    <input type="number" step="0.01" id="usdAmount" name="usdAmount" required><br>

    <input type="submit" value="Convert">
</form>

<h2>Result:</h2>
<p>VND Amount: ${vndAmount}</p>
</body>
</html>
