package triduc.com.demo_final.validation;

import jakarta.validation.ConstraintValidator;
import jakarta.validation.ConstraintValidatorContext;

import java.util.regex.Pattern;

public class SpecialCharacterValidator implements ConstraintValidator<SpecialCharacterConstraint,String> {
    private static final Pattern SPECIAL_CHARACTER =Pattern.compile("^[a-zA-Z0-9 ]*$");
    @Override
    public void initialize(SpecialCharacterConstraint constraint) {
    }

    @Override
    public boolean isValid(String value, ConstraintValidatorContext context) {
        if (value==null){
            return true;
        }
        return SPECIAL_CHARACTER.matcher(value).matches();
    }
}
