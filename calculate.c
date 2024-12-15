#include <stdio.h>
#include <math.h>
#include <string.h>
#include "calculate.h"

// калькулятор
float Calculate(float Numeral, char Operation[4]) {
    float SecondNumeral;
    // операция сложения
    if(strncmp(Operation, "+", 1) == 0) {
        printf("Второе слагаемое: ");
        scanf("%f",&SecondNumeral);
        return(Numeral + SecondNumeral);
    }
    // операция вычитания
    else if(strncmp(Operation, "-", 1) == 0) {
        printf("Вычитаемое: ");
        scanf("%f",&SecondNumeral);
        return(Numeral - SecondNumeral);
    }
    // операция умножения
    else if(strncmp(Operation, "*", 1) == 0) {
        printf("Множитель: ");
        scanf("%f",&SecondNumeral);
        return(Numeral * SecondNumeral);
    }
    // операция деления
    else if(strncmp(Operation, "/", 1) == 0) {
        printf("Делитель: ");
        scanf("%f",&SecondNumeral);
        if(SecondNumeral == 0) {
            printf("Ошибка: деление на ноль! ");
            return(HUGE_VAL);
        }
        else return(Numeral / SecondNumeral);
    }
    // степень
    else if(strncmp(Operation, "pow", 3) == 0) {
        printf("Степень: ");
        scanf("%f",&SecondNumeral);
        return(pow(Numeral, SecondNumeral));
    }
    // корень
    else if(strncmp(Operation, "sqrt", 4) == 0)
        return(sqrt(Numeral));
    // синус
    else if(strncmp(Operation, "sin", 3) == 0)
        return(sin(Numeral));
    // косинус
    else if(strncmp(Operation, "cos", 3) == 0)
        return(cos(Numeral));
    // тангенс
    else if(strncmp(Operation, "tan", 3) == 0)
        return(tan(Numeral));
    else {
        printf("Неправильно введено действие ");
        return(HUGE_VAL);
    }
}
