//
// Created by Acer on 15/09/2023.
//
#include<stdio.h>
#include<conio.h>
int vidu81(){
//int main(){
    float com=0,sales_amt;
    printf("Enter the Sales Amount: ");
    scanf("%f",&sales_amt);
    if(sales_amt>=10000)
        com= sales_amt * 0.1;
    printf("\n Commission = %f" ,com);
}