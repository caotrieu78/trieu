#include<stdio.h>
void hinh1(int n);
void hinh2(int n,int m);
int nhap();
int main(){
	int n=5;
	int m=5;
	//int n = nhap();
	printf("\n");
	hinh1(n);
	printf("\n");
	hinh2(n,m);
	return 0;
}
void hinh1(int n){
	for(int i = 1;i<=n;i++){
		for(int j=1;j<=n;j++){
		printf(" *");
	}
	printf("\n");
	}
}
void hinh2(int n,int m){
	for(int i = 1; i<=n ;i++){
	for(int j = 1; j<=n ;j++){
		if(j==2)
	     printf(" *");
         printf(" +");
     }
      printf("\n");
   }
}
int nhap(){
	int n;
	do{
		printf("nhap n: ");
		scanf("%d", &n);
		if(!(n>1)){
			printf("vui long nhap n >1");
		}
		}while(!(n>1));
	return n;
}
