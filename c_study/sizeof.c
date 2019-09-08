#include <stdio.h>
int main(){
	//整型数据类型
	printf("char类型占用的字节是%ld\n",sizeof(char));
	printf("short类型占用的字节是%ld\n",sizeof(short));
	printf("int类型占用的字节是%ld\n",sizeof(int));
	printf("long类型占用的字节是%ld\n",sizeof(long));
	printf("long long类型占用的字节是%ld\n",sizeof(long long));
	printf("float类型占用的字节是%ld\n",sizeof(float));
	printf("double类型占用的字节是%ld\n",sizeof(double));
	printf("long double类型占用的字节是%ld\n",sizeof(long double));
	int i=1;
	printf("int i占用的字节是%ld\n",sizeof(i));
	printf("&i占用的字节是%ld\n",sizeof(&i));
	
    /*
	printf("long double类型占用的字节是%ld\n",sizeof(long double));
	printf("long double类型占用的字节是%ld\n",sizeof(long double));
	printf("long double类型占用的字节是%ld\n",sizeof(long double));
	printf("long double类型占用的字节是%ld\n",sizeof(long double));
	printf("long double类型占用的字节是%ld\n",sizeof(long double));
	printf("int类型占用的字节是%ld\n",sizeof(int));
	printf("flat的类型占用的字节是%ld\n",sizeof(float));
	printf("double的类型占用的字节是%ld\n",sizeof(double));
	*/
}
