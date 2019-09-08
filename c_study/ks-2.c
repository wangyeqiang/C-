# include <stdio.h>
# include <stdlib.h>
int main(){
	char **s;
	//s = (char **)malloc(sizeof(char**));
	*s = "hello world";
	printf("%s\n",*s);
}
