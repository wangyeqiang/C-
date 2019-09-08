#include <stdio.h>
int main(){

  int x;
  x = 70000;
  int t = x;
  int cnt = 0;
  int mask = 1;
  while(t>9){
   t /= 10;
   mask *= 10;
   }
  printf("mask=%d\n",mask);

  do{
     int d = x/mask;
     printf("%d",d);
     if(mask>9) {
       printf(" ");
}
     x %= mask;
     mask /= 10;
//    printf("x=%d,mask=%d,d=%d\n",x,mask,d);
}while(mask>0);
  printf("\n");
 return 0;
}
