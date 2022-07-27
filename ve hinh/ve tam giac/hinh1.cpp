#include <stdio.h>
int main() {
   int n,i,j;
   n = 6;   // khai bao so hang.
   printf("Ve tam giac sao deu:\n");
    printf(" 1  2  3  4  5   \n");
   for(i = 1; i <= n; i++) {//so dong
      for(j = 1; j <= n-i; j++)//so cot
         printf(" ");//int ra khoang trang cua cot
     for(int k = 1; k <= i; k++)// k=1 ma k<=i nen moi lan k tang len 1 dau *
         printf("* ");
      printf("\n");
   }
   return 1;
}
