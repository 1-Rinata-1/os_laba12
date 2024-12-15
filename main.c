#include <stdio.h>
#include "calculate.h"

// основная функция
int main (void) {
    // число
    float Numeral;
    // операция
    char Operation[4];
    // результат
    float Result;
    // запрос на ввод числа
    printf("Число: ");
    // считывание числа с клавиатуры
    scanf("%f",&Numeral);
    printf("Операция (+,-,*,/,pow,sqrt,sin,cos,tan): ");
    // считывание операции с клавиатуры
    scanf("%s", Operation);
    // подсчет резуультата с помощью функции Calculate
    Result = Calculate(Numeral, Operation);
    // вывод результата на экран
    printf("%6.2f\n",Result);
    return 0;
}
