int main(){
	printf("请输入百分制分数:");
	int markfause=0;
	scanf("%d",&markfause);
	int mark=markfause/10;
	switch (mark){
			case 6:
				printf("D");
				break;
			case 7:
				printf("C");
				break;
			case 8:
				printf("B");
				break;
			case 9:
				printf("A");
				break;
			case 10:
				printf("A");
				break;
			default:
				printf("E");
				break;
			}
	return 0;
}
