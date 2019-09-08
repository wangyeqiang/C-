# include <stdio.h>
int main(){
	int i=1,j,n;
    scanf("%d",&n);
    while(i<=n){
		j = 1;
		while(j<=i){
			if(i*j<10){
				printf("%dx%d=%d   ",j,i,i*j);
					}
			else{
				printf("%dx%d=%d  ",j,i,i*j);
				
}
				j++;
				   }
        printf("\n");

		i++;
}	


}
