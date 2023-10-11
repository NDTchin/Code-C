//
// Created by Acer on 11/10/2023.
//
#include<stdio.h>
int InputNumber();
int Sum(int a, int b);
int Substraction(int a, int b);
int Multiplication(int a, int b);
float Division(int a, int b);
int main() {
    int so1, so2;
    int choose;
    printf("Calculation: \n");
    printf("1. Enter number\n");
    printf("2. Calculate Sum\n");
    printf("3. Calculate Substraction\n");
    printf("4. Calculate Multiplication\n");
    printf("5. Calculate Division\n");
    printf("6. Exit \n");
    do {
        printf("Choose function: ");
        scanf("%d", &choose);
        switch (choose) {
            case 1:
                so1 = InputNumber();
                so2 = InputNumber();
                break;
            case 2:
                printf("Sum: %d\n", Sum(so1, so2));
                break;
            case 3:
                printf("Substraction: %d\n", Substraction(so1, so2));
                break;
            case 4:
                printf("Multiplication: %d\n", Multiplication(so1, so2));
                break;
            case 5:
                printf("Division: %.2f\n", Division(so1, so2));
                break;
            case 6:
                return 0;
            default:
                printf("The selection is not valid!\n");
                break;
        }
    }while(1);
}
int InputNumber(){
    int so;
    printf("Input Number: ");
    scanf("%d", &so);
    return so;
}int Sum(int a, int b){
    return a + b;
}int Substraction(int a, int b){
    return a - b;
}int Multiplication(int a, int b){
    return a * b;
}float Division(int a, int b){
    return(float) a / b;
}