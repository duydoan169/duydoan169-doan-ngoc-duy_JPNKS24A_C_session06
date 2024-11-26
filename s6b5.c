#include<stdio.h>
int main(){
    int thang, nam;
    do{
        printf("nhap thang va nam: ");
        scanf("%d %d", &thang, &nam);
    }while(thang>12 || thang < 1 || nam <0);
    if(thang == 1 || thang == 3 || thang == 5 || thang == 7 ||thang == 8 || thang == 10 ||thang == 12)
        printf("thang co 31 ngay");
        else if(thang == 4 || thang == 6 || thang == 9 || thang == 11)
                printf("thang co 30 ngay");
            else if(nam%400==0 || nam%4==0 && nam%100!=0)
                    printf("thang co 29 ngay");
                else 
                    printf("thang co 28 ngay");
    return 0;
}