#include <stdio.h>
int main(){
	int x[]={1,2,3},*p=x,y;
	y=*++p;
	printf("%d\n",y);
	

	return 0;
}
