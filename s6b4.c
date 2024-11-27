#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, delta;
    printf("ax^2 + bx + c = 0\n");
    do{
    printf("nhap vao 3 so a b c: ");
    scanf("%d %d %d", &a, &b, &c);
        delta=b*b - 4*a*c;
    }while(a == 0);
    if(delta<0)
        printf("phuong trinh vo nghiem");
    if(delta==0)
        printf("phuong trinh co nghiem kep x1 = x2 = %d", -b/(2*a));
    if(delta>0)
        printf("phuong trinh co 2 nghiem phan biet x1 = %.1f, x2 = %.1f", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
    
    return 0; 
}
