#include <stdio.h>

int main(){
	
	int f=0;
	int x=0;
	printf("请输入函数f（x）中自变量的值，例如输入\"2\"表示\"f(2)\"");
	scanf("%d",&x);
	
	if(x<0){
		f=-1;	
	}else if(x==0){
		f=0;
	}else{
		f=2*x;
	}
	
	printf("%d",f);
	return  0;
}
