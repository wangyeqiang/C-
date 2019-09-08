#include <stdio.h>
int strlen(char *s);
int main(){
	strlen("hello world");
	return 0;
}

int strlen(char *s)
{
	int n;
	for(n=0;*s !='\0'; s++){
		n++;
	}
	printf("%d\n",n);
	return n;

}
