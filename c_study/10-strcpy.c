# include <stdio.h>
# include <string.h>
char*  mycpy(char* dst,const char* src){  //注：这里是返回的char*类型，这个char*就是字符串数组的意思
	int idx=0;
//	while(src[idx] != '\0'){
//		dst[idx] = src[idx];	
//		idx ++;
//	}
//  dst[idx] = '\0';
	char* ret = dst;
	while(*dst++ = *src++){
		;
	}

	*dst = '\0';
	return ret;	


}
int main(){
	char str1[] = "abcd";
	char str2[] = "abc";
	printf("%s\n",mycpy(str1,str2)); //strcpy(s1,s2)是复制s2到s1然后返回复制后的字符串
//	mycpy(str1,str2);
	return 0;
}
