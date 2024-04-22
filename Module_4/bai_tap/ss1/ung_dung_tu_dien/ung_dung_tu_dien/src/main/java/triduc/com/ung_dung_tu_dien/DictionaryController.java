package triduc.com.ung_dung_tu_dien;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;

import java.util.HashMap;
import java.util.Map;

@Controller
public class DictionaryController {
    @RequestMapping("/")
    public String home() {
        return "translate";
    }

    @PostMapping("/translate")
    public String search(@RequestParam("word") String word, Model model) {
        // Tạo một từ điển với các từ và nghĩa của từ
        Map<String, String> dictionary = new HashMap<>();
        dictionary.put("apple", "quả táo");
        dictionary.put("banana", "quả chuối");
        dictionary.put("cat", "con mèo");

        String definition = dictionary.getOrDefault(word.toLowerCase(), "");

        if (definition.isEmpty()) {
            model.addAttribute("message", "Không tìm thấy từ trong từ điển.");
        } else {
            model.addAttribute("word", word);
            model.addAttribute("definition", definition);
        }

        return "translate";
    }
}
