#include <stdio.h>
int main(){
    char password[20], matkhau[14]="matkhaureal123";
        printf("nhap mat khau: ");
        scanf("%s",&password);
    if(password == matkhau)
        printf("mat khau dung");
    else
        printf("mat khau sai");
    return 0;
}