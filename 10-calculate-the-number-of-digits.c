#include<stdio.h>

int main (){
	
	int n=0;
	int a=0;
	
	scanf("%d",&a);
	
	n++;
	a/=10;
	while(a>0){
		n++;
		a/=10;
	}
	
	printf("位数为%d\n",n);
	return 0;
}
