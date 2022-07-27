#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    float S = 0;
    printf("\nNhap n: ");
    scanf("%d", &n);
   for(int i=1;i<=n;i++)
    {
        S = S + i * i;
    }
    printf("\nTong 1^2 + 2^2 + ... + %d^2 la: %2.f",n, S);
    getch();
    return 0;
}
