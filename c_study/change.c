#include <stdio.h>

int main(){
	int a=1;
	int b=2;
	int c;
 	c = a;
	a = b;
	b = c;	
	printf("a的值是%d,b的值是%d",a,b);
}
