//
// Created by Acer on 20/09/2023.
//

#include <stdio.h>
int vidu77(){
   // int main(){
        int x,y;
        x=y=0;

        printf("Enter Choice (1-3):");
        scanf("%d",&x);
        if (x==1)
        {
            printf("\nEnter value for y(1-5):");
            scanf("%d", &y);
            if (y <= 5)
                printf("\nThe value for y is:%d", y);
            else
                printf("\nThe value of y exceeds ");
        }
        else
            printf("\nChoice entered was not 1");

    }