//
// Created by Acer on 06/10/2023.
//
#include<stdio.h>
//int soluongsvtruot(){
int main(){
    int i, n;
    int count = 0;
    printf("Nhap so luong sv: ");
    scanf("%d",&n);
    float marks[n];
    for(i=0;i<n;i++){
        printf("Diem sv %d: ",i+1);
        scanf("%f", &marks[i]);
        if(marks[i]<5)
            count++;
    }printf("So sv truot %d",count);
}