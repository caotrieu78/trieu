#include<stdio.h>
void MatCuoi(int m ,int n){
for(int i =1;i <= m;i++){//so dong 
	for(int j =1;j <= n;j++){// so cot
  if((i==1&&(j==3  || j== 4||j == 5))
	||(i==2&&(j==2 || j== 6))
	||(i==3&&(j==1 || j==3 || j== 5||j== 7))
	||(i==4&&(j==1 || j== 4 || j==7))
	||(i==5&&(j==1 || j==3|| j==5 || j== 7))
	||(i==6&&(j==2 || j==6))
	||(i==7&&(j==3 || j==4 || j==5))){
		printf(" * ");
	}else{
		printf("   ");
	}
}
	printf("\n");
}
}
void Mat(int m ,int n){
	for(int i =1;i <= n;i++){ 
		for(int j =1;j <= n;j++)
	if((i<= n&&(j==4)))
	printf("z "); 
         printf(" i ");
      printf("\n");
   }
}
int main(){
	int m=7,n=7;
	MatCuoi(m,n);
	Mat(m,n);
	return 0;
}
