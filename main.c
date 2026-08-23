//
// Created by ArisMaree095 on 8/19/26.

#include "calculator.h"
#include "calculator.c"
#include <stdio.h>

int main()
{
    //CALCULATOR VARIABLES
    char operator = '\0';
    double num1, num2;

    printf("Enter the operator (+ - * /): \n");
    scanf("%c", &operator);

    printf("Enter the numbers: \n");
    scanf("%lf" "%lf", &num1, &num2);

    switch (operator)
    {
        //ADDITION
    case '+':
        printf("%f + %f = %f\n,", num1, num2, add(num1, num2));
        break;

        //SUBTRACTION
    case '-':
        printf("%f - %f = %f\n,", num1, num2, subtract(num1, num2));
        break;

        //MULTIPLICATION
    case '*':
        printf("%f * %f = %f\n,", num1, num2, multiply(num1, num2));
        break;

        //DIVISION
    case '/':
        printf("%f / %f = %f\n,", num1, num2, divide(num1, num2));
        break;

    default:
        printf("Invalid operator entered.\n");
    }

    return 0;
}