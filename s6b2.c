#include <stdio.h>
int main(){
    int number, chan, i;
    for(i=1;i<=5;i++){
        printf("nhap so nguyen thu %d: ", i);
        scanf("%d",&number);
        if(number%2==0){
            chan=chan+1;
        }
    }

    printf("so luong so chan trong cac so vua nhap la %d", chan);
    return 0;
}