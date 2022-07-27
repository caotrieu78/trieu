#include <stdio.h>
int main() {
   int n,i,j;
   n = 6;
   printf("Ve tam giac sao deu:\n");
   for(i = 2; i <= n; i++) {//so dong
      for(j = 1; j < i; j++)// so cot
         printf("+"); 
      for(int k = i;k <= n; k++)//k<=n => k=6 
      //do j tang 1 lan moi lan xuong dong nen VD: 
      //j xuong dong = 2 => 2==>6 co 5 dau *
         printf("* ");
      printf("\n");
   }
   return 1;
}
