//
// Created by Acer on 04/10/2023.
//
#include<stdio.h>
int timso(){
//int main(){
    int i,n;
    int A[n];
    printf("Nhap tong so phan tu co trong mang: ");
    scanf("%d",&n);
//Nhap cac phan tu trong mang
    for(i=0;i<n;i++) {
        printf("\nNhap phan tu cua mang %d: ", i + 1);
        scanf("%d", &A[i]);
    }
//Tim phan tu muon tim
    int sct;
    printf("Nhap phan can tim: ");
    scanf("%d", &sct);
    int found=0;
    for( i = 0; i<n ; i++) {
        if (sct==A[i])
            printf("Phan tu %d co trong mang tai vi tri %d.\n", sct,i);
            found=1;
        }
    if (!found){
        printf("Phan tu %d ko co trong mang",sct);
    }

}