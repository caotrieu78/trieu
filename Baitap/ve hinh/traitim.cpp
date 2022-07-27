#include<stdio.h>
void TraiTim(int m ,int n){
for(int i =1;i <= m;i++){//so dong 
	for(int j =1;j <= n;j++){// so cot
	if(!((i==1 && (j==1 || j== 4 || j== 7))
	|| (i==4 && (j==1 || j==7 ))
	|| (i==5 && (j<=2 || j>=6))
	|| (i==6 && (j<=3 || j >=5))))	{
		printf(" * ");
	}else{
		printf("   ");
	}
}
	printf("\n");
}
}
int main(){
	int m=6,n=7;
	TraiTim(m,n);
	
	return 0;
}
