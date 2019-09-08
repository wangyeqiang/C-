#include <stdio.h>
void swap(int *pa,int *pb);
void swap1(int a,int b);
void main(){
	int a=5;
	int b=6;
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);	

	int c=5;
	int d=6;
	swap1(c,d);
	printf("c=%d,d=%d\n",c,d);

}

void swap(int *pa,int *pb){ // 注：这里定义的int *pa不是表示他是个int，表示的意思是pa是一个其值指向int的指针
	int t = *pa;
	*pa = *pb;
	*pb = t;
}

void swap1(int a,int b){ 
	int t = a;
	a = b;
	b = t;
}
