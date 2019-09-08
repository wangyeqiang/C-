#include <stdio.h>

int isPrime1(int num){
	int ret = 1;
	int i;
	if(num==1) ret=0;
	for(i=2;i<num;i++){
		if(num%i==0){
			ret = 0;
			break;
		}
	}
	return ret;
}

int isPrime2(int num){
	int ret=1;
	int i;
	if(num==1 || (num%2==0 && num!=2)){
		ret = 0;
		return ret;
	}
	for(i=3;i<num;i+=2){
		if(num%i==0){
			ret = 0;
			break;
		}
	}
	return ret;
}

int main(){
	int ret;
	int num;
	scanf("%d",&num);
	ret = isPrime2(num);
	if(ret==0){
	printf("%d不是素数\n",num);
	}else{
	
	printf("%d是素数\n",num);
	}
}
