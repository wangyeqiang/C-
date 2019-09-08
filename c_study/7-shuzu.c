#include <stdio.h>
int main(){
	int const number = 10;
	int x,i;
	int count[number];
	for(i=0;i<number;i++){
		count[i] = 0;
	}
	
	scanf("%d",&x);
	while(x!=-1){
		scanf("%d",&x);
		count[x] += 1;
	}
	
	for(i=0;i<number;i++){
		printf("%d:%d\n",i,count[i]);
	}

	return 0;
}
