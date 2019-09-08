# include <stdio.h>
void sum(int begin,int end); //声明

int main(){
	sum(10,20);
	sum(20,30);
	return 0;
}

void sum(int begin,int end){  //定义
	int i;
	int ret = 0;
	for(i=begin;i<=end;i++){
		ret += i;
}
	printf("%d\n",ret);

}
