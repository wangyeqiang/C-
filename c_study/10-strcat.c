# include <stdio.h>
# include <string.h>
char * mycat(char* s1, const char* s2){
	int l1 = strlen(s1);
	int l2 = 0;
	while(l2<strlen(s2)){
		s1[l1] = s2[l2];
		l1 ++;
		l2 ++;
}
	s1[l1] = '\0';
	return s1;

}



int main(int argc, const char *argv[]){  // 注：这里的*表示是多个参数的意思，和指针无关
	char str1[20] = "colourful";  //注：这个地方要注意字符数组的大小，否则会报错
	char str2[] = "cat";
    // strcat(str1,str2);
	printf("%s\n",mycat(str1,str2));
	return 0;

	

}
