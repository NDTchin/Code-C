//
// Created by Acer on 25/09/2023.
//
#include<stdio.h>
#include<conio.h>
//int Vidu103(){
int main(){
    int cnt=0,num;
    do{
        printf("\n Enter a Number:");
        scanf("%d",&num);
        printf("No.is %d", num);
        cnt++;
    }while (num !=0);
    printf("\n The total numbers entered were %d",cnt--);

}