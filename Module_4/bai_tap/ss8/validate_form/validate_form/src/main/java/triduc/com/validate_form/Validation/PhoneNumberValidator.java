package triduc.com.validate_form.Validation;

import jakarta.validation.ConstraintValidator;
import jakarta.validation.ConstraintValidatorContext;

import java.util.regex.Pattern;

public class PhoneNumberValidator implements ConstraintValidator<PhoneNumberConstraint, String> {
    private static final Pattern PHONE_NUMBER_PATTERN = Pattern.compile("^[0-9]{10}$");

    @Override
    public void initialize(PhoneNumberConstraint constraint) {
    }

    @Override
    public boolean isValid(String phoneNumber, ConstraintValidatorContext context) {
        if (phoneNumber == null) {
            return true;
        }
        return PHONE_NUMBER_PATTERN.matcher(phoneNumber).matches();
    }
}