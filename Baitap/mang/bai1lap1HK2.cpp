#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define COLS 100
#define ROWS 100
int NhapN(char S[], int Min,int Max);
void XuatMang(int a[][COLS], int d, int c);
void TaoMangNN(int a[][COLS], int d, int c);
void caub(int a[][COLS], int d, int c);
void cauc(int a[][COLS], int d, int c);
void caud(int a[][COLS], int d, int c);
void caue(int a[][COLS], int d, int c);
bool songuyento(int n);
void cauf(int a[][COLS],int d,int c);
int main()
{
  srand ((unsigned int ) time (NULL));
	
	int a[ROWS][COLS];
	int d,c;
	char Sd[5]="dong",Sc[5]="cot";
	d=NhapN(Sd,2,50);
	c=NhapN(Sc,2,50);
	TaoMangNN(a,d,c);
	printf("mang vua tao:\n");
	XuatMang(a,d,c);
	printf("bai 2 b\n");
	caub(a,d,c);
	XuatMang(a,d,c);
	printf("bai 2 c\n");
	cauc(a,d,c);
	XuatMang(a,d,c);
	caud(a,d,c);
	printf("bai 2 d\n");
	XuatMang(a,d,c);
	caue(a,d,c);
	printf("bai 2 e\n");
	XuatMang(a,d,c);
	cauf(a,d,c);
	printf("bai 2 f\n");
	XuatMang(a,d,c);
	return 0;
} 
int NhapN(char S[], int Min,int Max){
int n;
	do
	{
		printf("nhap %s (%d-%d):", S,Min,Max);
		scanf("%d", &n);
		if (!((n>=Min)&& (n <= Max)))
		printf("chi nhan so tu %d - %d. Nhap lai .\n",Min,Max);
	}while (!((n>=Min)&& (n <= Max)));
	return n;
}
void TaoMangNN(int a[][COLS], int d, int c)
{
	int tu=-100,den=100;
	for(int i=0;i<d;i++)
		for(int j=0;j<c;j++)
		{
			a[i][j]=rand() %(den - tu +1 )+tu;
		}
}
void XuatMang(int a[][COLS], int d, int c)
{
		for(int i=0;i<d;i++)
		{
			for(int j=0;j<c;j++)
				printf("%5d",a[i][j]);
			printf("\n");
		}
}
void caub(int a[][COLS], int d, int c)
{
	for(int i=0;i<d;i++)
		for(int j=0;j<c;j++)
			a[i][j]=i*j;	
}
void cauc(int a[][COLS], int d, int c)
{
	int tu=0,den=99;
	for(int i=0;i<d;i++)
		for(int j=0;j<c;j++)
		{
			a[i][j]=rand() %(den - tu +1 )+tu;
		}
}
void caud(int a[][COLS], int d, int c)
{
		int tu=-100,den=100;
		for(int i=0;i<d;i++)
		{
			for(int j=0;j<c;j++)
			do
			{
				a[i][j]=rand() %(den - tu +1 )+tu;
			}while (a[i][j]%2==0);
			printf("\n");	
		}	
		
}
bool songuyento(int n)
{
	if(n<2)
		return false;
	for(int i=2;i<=n/2;i++)
		if(n%i==0)
		return false;
	return true;
}
void caue(int a[][COLS], int d, int c)
{
		int tu=0,den=99;
		for(int i=0;i<d;i++)
		{
			for(int j=0;j<c;j++)
			do
			{
				a[i][j]=rand() %(den - tu +1 )+tu;
			}
			while (songuyento(a[i][j])==false);	
		}		
}	
void cauf(int a[][COLS],int d,int c)
{
	int tu=0,den=99;
	
		for(int i=0;i<d;i++)
		{
			for(int j=0;j<c;j++)
			if((i+j)%2==0)
				do
				{
					a[i][j]=rand() %(den - tu +1 )+tu;
				}
				while (a[i][j]%2==0);	
			else
				do
				{
					a[i][j]=rand() %(den - tu +1 )+tu;
				}
				while (a[i][j]%2!=0);	
		}				
}