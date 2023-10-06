//
// Created by Acer on 06/10/2023.
//
#include<stdio.h>
//int inhcn(){
void draw1();
void draw2(int width,int height);
    void draw1() {
        printf("******\n");
        printf("******\n");
        printf("******\n");
        printf("******\n");
        printf("******\n");
    }
    void draw2(int width,int height){
        for (int i= 0;i<height;i++){
        printf("\n");
        for(int j=0;j<width;j++)
        printf("*");
        }
    }
    int main() {
    draw1();
    draw2(5,6);
}