# include <stdio.h>

struct date{
	int day;
	int month;
	int year;
};
int main(int argc, const char *argvs[]){
	struct date date1;   //要先定义这个变量
	struct date *date2=NULL;
	date1 = (struct date){5,11,2019};
	date2 = &date1; // 这里赋予指针变量的时候，和数组不一样，数组可以直接把名字赋予给指针，而这里结构腰际上&date
	printf("%i-%i-%d\n",date1.year,date1.month,date1.day);
	printf("%p",date2);  // 输出指针
	return 0;
}
