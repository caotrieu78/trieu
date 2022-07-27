#include<stdio.h>
void TraiTim(int m ,int n){
for(int i =1;i <= m;i++){//so dong 
	for(int j =1;j <= n;j++){// so cot
	if((i==1&&(j==1|| j== 3||j == 5))
	||(i==2&&(j==3))
	||(i==3&&(j==2 || j ==4 ))
	||(i==4&&(j==3))
	|| (i==5&&(j==1||j==3||j==5))){
	
		printf(" * ");
	}else{
		printf("   ");
	}
}
	printf("\n");
}
}
int main(){
	int m=5,n=5;
	TraiTim(m,n);
	
	return 0;
}
