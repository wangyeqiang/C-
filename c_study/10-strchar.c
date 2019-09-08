# include <stdio.h>
# include <string.h>
# include <stdlib.h>


int main(){
	char str1[] = "abcdedfg";
	char c = 'd';
	char *p = strchr(str1,c); // 这里的*p代表一个字符我们打印的是整个p
	char d = *p; //这里的*p只代表一个字符，而p是指针，p可以代表这个指针所有的字符数组，所以这里的定义是没有问题的；
	*p = '\0'; // 这里把p指针对应的值变成了'\0'

	char *t = (char*)malloc(strlen(str1)+1);
	strcpy(t,str1);
	printf("%s\n",t);
	free(t);
	*p = d;

	return 0;
}
