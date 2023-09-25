//
// Created by Acer on 25/09/2023.
//

#include<stdio.h>
//int BMI(){
//int main(){
float w,h;
printf("Nhap vao can nang (kg): ");
scanf("%f", &w);
printf("Nhap vao chieu cao (m): ");
scanf("%f", &h);
float BMI=w/(h*h);
printf("Chi so BMI:%f",BMI);
if (BMI <18.5) {
printf("Gay\n");
} else if (BMI<24.9) {
printf("Binh thuong\n");
} else if (BMI<29.9) {
    printf("Binh thuong\n");
} else if (BMI>29.9) {
printf("Beo phi\n");
}
return 0;
}