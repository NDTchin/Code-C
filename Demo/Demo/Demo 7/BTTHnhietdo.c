//
// Created by Acer on 02/10/2023.
//
#include<stdio.h>
//int thoitiet(){
int main(){
    float temp[3];
    int i=0;
    for (i=0; i<3;i++){
        printf("temp %d:",i+1);
        scanf("%f",&temp[i]);
    }
    int index_max = 0;
    float max = temp[0];
    for(i=1;i<3;i++){
        if(temp[i]>max){
            max=temp[i];
            index_max =i;
        }
    }printf("day %d max  %f", index_max+1,max);
}