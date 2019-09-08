# include <stdio.h>
int test(*a);
int main(){
	int a[3] = {1,2,3};
	test(a);
	printf("%p\n",a);


}


int test(int *a){
	printf("a = %p\n",a);
	printf("a[0]= %p\n",&a[0]);
//	printf("a[]= %p\n",a[]);
	return 0;



}
