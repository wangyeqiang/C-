# include <stdio.h>
struct date{	
	int day;
	int month;
	int year;
};

void f(struct date * p);

int main(){
	struct date date1 = {1,2,3};
	struct date *p_date1 = &date1;  // p_date1指针指向date1的地址
	f(p_date1);
	printf("%i-%i-%i\n",date1.year,date1.month,date1.day); //这里的struct date date1就发生了改变
	return 0;
}

void f(struct date * p){

	p->day = 4;
	p->month = 5;
	p->year = 6;
	
}
