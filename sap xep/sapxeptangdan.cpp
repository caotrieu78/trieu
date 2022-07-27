#include <stdio.h>
#include<string.h>
int main()
{
    char n[10];
        printf("\n Nhap so nguyen duong n:");
        scanf("%s", &n);
    for(int i = 0; i<strlen(n)-1 ;i++){
     for(int j =i+1 ; j<strlen(n) ;j++)
     if (n[i]> n[j]){
        char c = n[i];
        n[i]=n[j];
        n[j]=c;
     }
     printf("\n sau khi xap xep la %s ", n);
    }
}
