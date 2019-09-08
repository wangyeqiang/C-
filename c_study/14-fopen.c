# include <stdio.h>
int main(int argc, const char *argv[]){
	
	FILE *fp = fopen("14.in","r");
	if(fp){
		int num;
		fscanf(fp,"%d",&num);
		printf("%d\n",num);
		fclose(fp);
	}
	else{
		printf("无法打开文件\n");
	}



}
