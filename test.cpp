#include <stdio.h>
int main()
{
    int n;
    printf("nhap n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("cao trieu %d", i);
        printf("\n");
    }
    return 0;
}