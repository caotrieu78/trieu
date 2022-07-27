#include<stdio.h>
#include <math.h>
void Nhapso(int &n);
int menu(int n,int d,int c);
int Hinh1(int n,int d,int c);
int Hinh2(int n,int d,int c);
int Hinh3(int n,int d,int c);
int Hinh4(int n,int d,int c);
int Hinh5(int n,int d,int c);
int Hinh6(int n,int d,int c);
int Hinh7(int n,int d,int c);
int Hinh8(int n,int d,int c);
int main() {
 int n,d,c;
 Nhapso(n);menu(n,d,c);
 Hinh1(n,d,c);
 Hinh2(n,d,c);
 Hinh3(n,d,c);
 Hinh4(n,d,c);
 Hinh5(n,d,c);
 Hinh6(n,d,c);
 Hinh7(n,d,c);
 Hinh8(n,d,c);

 return 1; }
int menu(int n,int d,int c)
{
int num;
 do{
 printf("\n 0-Nhap canh cua tam giac");
 printf("\n 1.- Hinh 1");
 printf("\n 2.- Hinh 2");
 printf("\n 3.- Hinh 3");
 printf("\n 4.- Hinh 4");
 printf("\n 5.- Hinh 5");
 printf("\n 6.- Hinh 6");
 printf("\n 7.- Hinh 7");
 printf("\n 8.- Hinh 8");
 printf("\n 9.- Ket thuc chuong trinh.");
 printf("\nBan chon (0-9): \t");
 scanf("%d",&num);
 switch(num)
 {
 case 0:
 Nhapso(n);
 break;
 case 1:
 Hinh1(n,d,c);
 break;
 case 2:
Hinh2(n,d,c);
 break;
 case 3:
Hinh3(n,d,c);
 break;
 case 4:
Hinh4(n,d,c);
 break;
 case 5:
Hinh5(n,d,c);
 break;
 case 6:
Hinh6(n,d,c);
 break;
 case 7:
Hinh7(n,d,c);
 break;
 case 8:
Hinh8(n,d,c);
 break;
 default:
 break;
 }
 }while(n!=9);
 return n;
}
void Nhapso(int &n)
{
 printf("Nhap canh cua tam giac :");
 scanf("%d",&n);
}
int Hinh1 (int n,int d,int c)
{
printf("\n Hinh1: \n") ;
for (d=1;d<=n;d++) {
for (c=1;c<=2*n-1;c++) {
if (c>=n-d+1 && c<=n+d-1) {
printf("* ");
} else {
printf(" ");
}
}
printf("\n");
}
}
int Hinh2 (int n,int d,int c) {
printf("\n Hinh 2: \n");
for (d=n;1<=d;d--) {
for (c=1;c<=2*n-1;c++) {
if (c>=n-d+1 && c<=n+d-1) {
printf("* ");
} else {
printf (" ");
}
}
printf("\n");
}
}
int Hinh3 (int n, int d, int c)
{
printf ("\n Hinh 3: \n");
for (d=n;1<=d;d--) {
for (c=1;c<=2*n-1;c++) {
if (d==1 || c==d || d+c==2*n) {
printf("* ");
} else {
printf(" ");
}
}
printf("\n");
}
}
int Hinh4 (int n,int d,int c)
{
printf("\n Hinh 4: \n");
for (d=1;d<=n;d++) {
for(c=1;c<=2*n-1;c++) {
if(d==1 || d==c || d+c==2*n) {
printf("* ");
} else {
printf(" ");
}
}
printf("\n");
}
}
int Hinh5 (int n,int d,int c)
{
printf("\n Hinh 5: \n");
for (d=1;d<=2*n-1;d++) {
for(c=1;c<=n;c++) {
if(c==1 || d==c || d+c==2*n) {
printf("* ");
} else {
printf(" ");
}
}
printf("\n");
}
}
int Hinh6 (int n,int d,int c)
{
printf("\n Hinh 6: \n");
for (d=1;d<=n;d++) {
for (c=1;c<=n;c++) {
if(c==n-d+1 || c==n+d-1 || c==n ) {
printf("* ");
} else {
printf(" ");
}
}
printf("\n");
}
for (d=(n-1);d>=1;d--) {
for (c=1;c<=n;c++) {
if(c==n-d+1 || c==n+d-1 || c==n) {
printf("* ");
} else {
printf(" ");
}
}
printf("\n");
}
}
int Hinh7 (int n,int d,int c)
{
printf("\n Hinh 7: \n");
for (d=1;d<=n;d++) {
for (c=1;c<=d;c++) {
printf("* ");
}
printf("\n");
}
for (d=(n-1);d>=1;d--){
for (c=1;c<=d;c++) {
printf("* ");
}
printf("\n");
}
}
int Hinh8 (int n,int d,int c)
{
printf("\n Hinh 8: \n");
for (d=1;d<=n;d++) {
for (c=1;c<=n;c++) {
if(c>=n-d+1 && c<=n+d-1) {
printf("* ");
} else {
printf(" ");
}
}
printf("\n");
}
for (d=(n-1);d>=1;d--) {
for (c=1;c<=n;c++) {
if(c>=n-d+1 && c<=n+d-1) {
printf("* ");
} else {
printf(" ");
}
}
printf("\n");
}
} 
