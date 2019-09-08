# include <stdio.h>
// define size is 
const int size= 3;
int inPutData(int a[size][size],int size);
int  whoIsWin(int a[size][size], int n);
void printWinner(a[size][size],int n);
int main(){
	const int size = 3;
	int jzq[size][size];
	inPutData(jzq,size);  
	printWinner(jzq,size); // 这里的jzp作为实参，无需+[size][size]
	return 0;
}

void printWinner(a[size][size],int n){
	switch(whoIsWin(a,size)){
		case -1:{
			printf("比赛没有赢家\n");
			break;
		}
		case 0:{
			printf("赢家是o\n");	
			break;
		}
		case 1:{
			printf("赢家是x\n");
			break;
		}
	}	

	}

int inPutData(int a[size][size],int size){
	// 输入
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&a[i][j]);
		}
	}
}

int whoIsWin(int a[size][size], int n){
	int result = -1;
	int i,j;
	int rowOfx,rowOfo,columnOfx,columnOfo;
	int diagoOfx,diagoOfo,rdiagoOfx,rdiagoOfo; 
	// 处理行和列的情况
	for(i=0;i<n&&result!=-1;i++){
	rowOfx,rowOfo,columnOfx,columnOfo = 0;
		for(j=0;j<n&&result!=-1;j++){
			if(a[i][j] == 1){
				rowOfx ++;
			}
			else{
				rowOfo ++;
			}
			// 因为横竖是一样的长度，相当于转至
			if(a[j][i] == 1){
				columnOfx ++;
			}
			else{
				columnOfo ++;
			}
		}
		// 下面的情况是x胜
		if(rowOfx==n || columnOfx ==n){
			result = 1; 
		}
		// 下面的情况是o胜
		if(rowOfo==n || columnOfo ==n){
			result = 0;
		}	

	}
	
	// 处理对角线的情况
	diagoOfx,diagoOfo,rdiagoOfx,rdiagoOfo=0;
	for(i=0;i<n&&result==-1;i++){
		if(a[i][i] ==1){
			diagoOfx ++;
		}
		else{
			diagoOfo ++;
		}
		if(a[i][n-i-1]==1){
			rdiagoOfx ++;
		}
		else{
			rdiagoOfo ++;
		}
	// 判断谁胜
	if(diagoOfx==n || rdiagoOfx==n){
		result = 1;
		}
	if(diagoOfo==n || rdiagoOfo==n){
		result = 0;
		}
	}	
	return result;


}
