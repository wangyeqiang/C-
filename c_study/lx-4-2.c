# include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int con=1,i=1,j;
    while(i<N){
        con *=10;
        i++;
}
//    printf("%d\n",con);
    for(j=con;j<con*10;j++){
   	int k = j;
        int sum=0;
        while(k>0){
	    int p=1;
	    int d = k%10;
 	    k /= 10;
 	    int m=0;
	    while(m<N){
                p *=d;
	        m++;
}
 	    sum += p;
//	    printf("%d\n",sum);
}
 	if(sum==j){
	    printf("%d\n",sum);
	
}

}
    
    



}
