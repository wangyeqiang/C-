# include <stdio.h>
enum color{red,yellow,blue};
void f(enum color c);
int main(){
	enum color t = red;
	f(t);	
	return 0;
}

void f(enum color c){

	printf("%d\n",c);


}
