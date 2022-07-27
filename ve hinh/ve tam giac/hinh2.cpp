#include <stdio.h>
int main() {
   int n,i,j;
   n = 5;
   printf("Ve tam giac sao deu:\n");
   printf(" 1  2  3  4  5   \n\n");
   for(i = 1;i <= n; i++){// so dong
   	 for(j = 1; j <= n-i; j++)//  so cot
            printf(" z "); 
         printf(" i ");
      printf("\n");
   }
 printf("\n 1  2  3  4  5   \n");
   return 1;
}
