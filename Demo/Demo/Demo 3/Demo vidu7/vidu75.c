//
// Created by Acer on 20/09/2023.
//
#include <stdio.h>
void vidu74(){
//void main(){
    char c;
    printf("Please enter a character: ");
    scanf("%c",&c);
    if (c>= 'A' && c <= 'z')
        printf("Lowercase character = %c", c+'a' - 'A');
    else
        printf("Character Entered is=%c",c);

}