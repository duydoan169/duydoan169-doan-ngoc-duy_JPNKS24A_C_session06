#include <stdio.h>
int main(){
    int number, sum, i;
    for(i=1;i<=5;i++){
        printf("nhap so nguyen thu %d: ", i);
        scanf("%d",&number);
        if(number%2!=0){
            sum=sum+number;
        }
    }

    printf("tong cac so le trong cac so vua nhap la %d", sum);
    return 0;
}