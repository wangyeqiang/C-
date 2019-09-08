#include <stdio.h>
int main(){
int a,b,c,max;
printf("请输入三个整数a,b,c");
scanf("%d %d %d",&a,&b,&c);
if(a>b){
  if(b<c)
    max = c;
  else
    max = b;
}
else{
  if(a>c)
   max=a;
  else
   max=c;
}
printf("a,b,c的最大值是%d",max);
}
