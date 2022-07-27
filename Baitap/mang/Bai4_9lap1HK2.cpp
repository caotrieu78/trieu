#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Max 200

void Bai_4(int n, int m, int a[][Max]);
void Bai_5(int n, int m, int a[][Max]);
void Bai_6(int n, int m, int a[][Max]);
void Bai_7(int n, int m, int a[][Max]);
void Bai_8(int n, int m, int a[][Max]);
void Bai_9(int n, int m, int a[][Max]);

int main()
{
    int n, m, a[Max][Max];
    srand((unsigned int)time(NULL));

    printf("Nhap dong n: ");
    scanf("%d", &n);

    printf("Nhap cot m: ");
    scanf("%d", &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = rand() % 10;
        }
    }

    Bai_4(n, m, a);
    printf("\n");
    Bai_5(n, m, a);
    printf("\n");
    Bai_6(n, m, a);
    printf("\n");
    Bai_7(n, m, a);
    printf("\n");
    Bai_8(n, m, a);
    printf("\n");
    Bai_9(n, m, a);

    return 0;
}

void Bai_4(int n, int m, int a[][Max])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }
    printf("Tong cac so trong mang la: %d", sum);
}

void Bai_5(int n, int m, int a[][Max])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", a[i][j]);
            if (a[i][j] % 2 == 0)
                sum += a[i][j];
        }
        printf("\n");
    }
    printf("Tong cac so chan trong mang la: %d", sum);
}

void Bai_6(int n, int m, int a[][Max])
{
    int sum = 0, dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", a[i][j]);
            dem++;
            sum += a[i][j];
        }
        printf("\n");
    }
    printf("Gia tri trung binh cong trong mang la: %.2f", (float)sum / dem);
}

void Bai_7(int n, int m, int a[][Max])
{
    int tich = 1, dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", a[i][j]);
            dem++;
            tich *= a[i][j];
        }
        printf("\n");
    }
    printf("Gia tri trung binh nhan trong mang la: %d", tich / dem);
}

bool CheckSNT(int temp)
{
    if (temp < 2)
        return 0;
    for (int i = 2; i < temp; i++)
    {
        if (temp % i == 0)
            return 0;
    }
    return 1;
}

void Bai_8(int n, int m, int a[][Max])
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", a[i][j]);
            if (CheckSNT(a[i][j]))
                tong += a[i][j];
        }
        printf("\n");
    }
    printf("Tong cac SNT trong mang la: %d", tong);
}

bool Check_Sohoanthien(int tam)
{
    int tong = 0;
    for (int i = 1; i < tam; i++)
    {
        if (tam % i == 0)
            tong += i;
    }
    if (tong == tam)
        return 1;
    return 0;
}

void Bai_9(int n, int m, int a[][Max])
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", a[i][j]);
            if (Check_Sohoanthien(a[i][j]))
                tong += a[i][j];
        }
        printf("\n");
    }
    printf("Tong cac so hoan thien trong mang la: %d", tong);
}