# include <stdio.h>
# include <string.h>
int mycmp(const char *s1, const char *s2){
	int idx = 0;
//	while(1){
//		if(s1[idx] != s2[idx]){
//			break;
//		}else if(s1[idx] == '\0'){
//			break;
//		}
//		idx ++;
//	}
/* 用字符串数组表达
	while(s1[idx] == s2[idx] && s1[idx] != '\0'){
		idx ++;	
	}
*/
	while(*s1==*s2 && *s1 != '\0'){
		s1 ++;
		s2 ++;
	}
		return s1[idx] - s2[idx];
}
int main(){
	char str1[] = "abc";
	char str2[] = "zAA";
	printf("%d\n",mycmp(str1,str2));

	return 0;
}
