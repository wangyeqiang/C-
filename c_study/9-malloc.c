# include <stdio.h>
# include <stdlib.h>
int main(){
	int i;
	int a;
	int number;
	printf("输入数量\n");
	scanf("%d",&number);
	a = (int*)malloc(number*sizeof(int)); //这里申请的空间是以字节为单位的
	for(i=0;i<number;i++){
		scanf("%d",&a[i]);
	}	
	for(i=number-1;i>=0;i--){
		printf("%d",a[i]);
	}
	free(a);    //释放这块内存空间





}
