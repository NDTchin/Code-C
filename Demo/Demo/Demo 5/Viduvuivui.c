//
// Created by Acer on 25/09/2023.
//
#include<stdio.h>
//int Viduvui(){
int main(){
    char y ;
    do {
        printf("Do you love me? \n ");
        scanf("%c", &y);
        getchar();
    }while (y!= 'y' && y!= 'Y');
}