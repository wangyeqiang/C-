#include <stdio.h>
int main(){
	printf("%.3f\n",0.0049);
	printf("%.30f\n",0.0049);
	printf("%.3f\n",0.00049);

	float a,b;
	a = 1.345;
	b = 1.123; //f表示float，否则表示为double
	if(a+b==2.468){
		printf("相等");
}
	else{
		printf("%.10f\n",a+b);
}	
	
}
