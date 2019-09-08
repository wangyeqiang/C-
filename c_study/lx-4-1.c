# include <stdio.h>
int main(){
 int a,i,j,k;
 int cnt=0;
 scanf("%d",&a);
 for(i=a;i<a+4;i++){
   for(j=a;j<a+4;j++){
     for(k=a;k<a+4;k++){
       if(i!=j && j!=k && i!=k){
          cnt++;
          printf("%d",100*i+10*j+k);
          if(cnt%6 !=0){
             printf(" ");
          }else{
            printf("\n");
 
               }
                               }    

                       }

                      }   

                     } 
 
 return 0;
}
