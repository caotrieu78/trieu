#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    n=4;
    float S;
    S = 0;
      /*
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
        }
    }while(n < 1);
    */
    for(int i = 0; i < n; i++)
    {
        S = S + 1.0 / ((2 * i) + 1);
    }
    printf("\n 1/1 1/3 + 1/5 1/7 la: %f",S);
    getch();
    return 0;
}
