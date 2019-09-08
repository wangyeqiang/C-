#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int count=0,guess;
    int number = rand();
    printf("%d\n",number);
    number = number%100 + 1;
    printf("%d\n",number);
    do {
        printf("请输入一个你猜想的1-100数\n");
        scanf("%d",&guess);
	count ++;
        if(guess>number){
	  printf("哈哈，你猜大了\n");
}
        else if(guess<number) {
	  printf("哈哈，你猜小了\n");
}
       } while(number != guess);
    printf("恭喜你猜对了，一共用了%d次",count);
} 
