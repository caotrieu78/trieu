#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    float S;
    S = 0;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
        }
    }while(n < 1);
    for(i = 1; i <= n; i++)
    {
        S = S + 2.0 / (3 * i);
    }
    printf("\n 1/2 + 1/4 + 1/6.....1/%d la: %f",n,S);
    getch();
    return 0;
}
