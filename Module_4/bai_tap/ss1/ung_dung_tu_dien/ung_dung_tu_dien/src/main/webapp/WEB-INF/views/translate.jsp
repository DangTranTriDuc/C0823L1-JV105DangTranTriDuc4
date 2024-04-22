<%--
  Created by IntelliJ IDEA.
  User: ADMIN
  Date: 4/22/2024
  Time: 5:55 PM
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>Translate</title>
    <style>
        .container {
            max-width: 500px;
            margin: 0 auto;
            text-align: center;
        }

        h1, h2 {
            color: #333;
        }

        form {
            margin-bottom: 20px;
        }

        input[type="text"] {
            width: 300px;
            padding: 5px;
        }

        button {
            padding: 5px 10px;
        }

        #not-found p {
            color: red;
        }
    </style>
</head>
<body>
<div class="container">
    <h1>Tra cứu từ điển Anh-Việt</h1>
    <form id="search-form">
        <input type="text" id="search-input" placeholder="Nhập từ cần tra">
        <button type="submit">Tìm kiếm</button>
    </form>
    <div id="result-container" style="display: none;">
        <h2>Kết quả:</h2>
        <p id="definition"></p>
    </div>
    <div id="not-found" style="display: none;">
        <p>Không tìm thấy từ trong từ điển.</p>
    </div>
</div>
<script>
    document.getElementById('search-form').addEventListener('submit', function(event) {
        event.preventDefault();

        var word = document.getElementById('search-input').value;
        var dictionary = [
            { word: 'apple', definition: 'quả táo' },
            { word: 'banana', definition: 'quả chuối' },
            { word: 'cat', definition: 'con mèo' }
        ];

        var definition = '';
        for (var i = 0; i < dictionary.length; i++) {
            if (dictionary[i].word.toLowerCase() === word.toLowerCase()) {
                definition = dictionary[i].definition;
                break;
            }
        }

        if (definition !== '') {
            document.getElementById('result-container').style.display = 'block';
            document.getElementById('definition').textContent = definition;
            document.getElementById('not-found').style.display = 'none';
        } else {
            document.getElementById('result-container').style.display = 'none';
            document.getElementById('not-found').style.display = 'block';
        }
    });
</script>
</body>
</html>
