//
// Created by Acer on 20/09/2023.
//

 #include <stdio.h>
int d2_odd(){
 //int main() {
    int num, res;
    printf("Nhap vao mot so di ban oi..");
    scanf("%d", &num);
    res = num % 2;
    if (res == 0)
        printf("So chan nha ban \n");
    else
        printf("So le luon nay\n");
    return 1;
}
