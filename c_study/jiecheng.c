# include <stdio.h>
int main(){
   int i,n,ret=1;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
      ret *=i;
}
   printf("结果是%d",ret);
}
