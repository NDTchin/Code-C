//
// Created by Acer on 22/09/2023.
//
#include <stdio.h>
int 5(){
//int main() {
    float diem;
    printf("Nhap diem cua sinh vien: ");
    scanf("%f", &diem);
    if (diem >= 75) {
        printf("Xep loai: A\n");
    } else if (diem >= 60 && diem < 75) {
        printf("Xep loai: B\n");
    } else if (diem >= 40 && diem < 60) {
        printf("Xep loai: C\n");
    } else if (diem >= 35 && diem < 45) {
        printf("Xep loai: D\n");
    } else if (diem < 35) {
        printf("Xep loai: E\n");
    }
    return 0;
}
