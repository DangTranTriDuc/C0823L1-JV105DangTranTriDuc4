package triduc.com.demo_final.validation;

import jakarta.validation.Constraint;
import jakarta.validation.Payload;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

@Constraint(validatedBy = SpecialCharacterValidator.class)
@Target({ElementType.FIELD})
@Retention(RetentionPolicy.RUNTIME)

public @interface SpecialCharacterConstraint {
    String message() default "Invalid fields";

    Class<?>[] groups() default {};

    Class<? extends Payload>[] payload() default {};
}
