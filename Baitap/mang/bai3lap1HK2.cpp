#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Max 200

bool CheckSNT(int temp)
{
    if(temp < 2)
        return 0;
    for(int i = 2; i < temp; i++)
    {
        if(temp % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, m, a[Max][Max];
    int min = - 100, max = 100;
    srand((unsigned int) time(NULL));
    
    do
    {
        printf("Nhap dong n: ");
        scanf("%d", &n);
    } while (!(2 <= n && n < 50));

    do
    {
        printf("Nhap cot m: ");
        scanf("%d", &m);
    } while (!(2 <= m && m < 50));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nGia tri SNT thay bang khoang trang la: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(CheckSNT(a[i][j]))
                printf("     ");
            else
                printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nGia tri khong nam tren duong bien la khoang trang: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i == 0 || j == 0 || i == n - 1 || j == m - 1)
                printf("%5d", a[i][j]);
            else
                printf("     ");
        }
        printf("\n");
    }

    printf("\nGia tri dong + cot la so chan bang khoang trang: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if((i + j) % 2 == 0)
                printf("     ");
            else
                printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}