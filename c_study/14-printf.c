# include <stdio.h>
int main(){
	printf("%9d\n",123);  // 输出占9个位置，右对齐
	printf("%09d\n",123); // 输出站9个位置，右对齐，剩余的用0补齐
	printf("%-9d\n",123); // 输出占9个位置，左对齐
	printf("% d\n",123); // 就是输出一个空格
	printf("%s\n","**********");
	
	printf("%9.2f\n",123.0); // 表示纵隔9位，两位是小数点；
	printf("%*d\n",7,123);  // *表示下一个参数是字符数,那这里就表示占据7个字符；
	printf("%s\n","**********");

	int number;
	printf("%dty%n\n",123,&number);  // *表示下一个参数是字符数,那这里就表示占据7个字符；
	printf("%d\n",number);  // 这个number就是之前的%n，赋予number的值
	printf("%s\n","**********");


	int number2;
	scanf("%*d%d",&number2);
	printf("%d\n",number2);
	


	return 0;
}
