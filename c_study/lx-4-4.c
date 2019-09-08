# include <stdio.h>
int main(){
	int M,N;
    scanf("%d %d",&M,&N);
	int count=0,sum=0;
	int i=M;
	while(i<=N){
		int j=i-1,flag=1;
		while(j>1){
			if(i%j==0){
				flag=0;
				break;
				}
			j--;
			}
		if(flag==1){
			count += 1;
			sum += i;
}
		i++;
}
	printf("%d %d\n",count,sum);

	return 0;
}
