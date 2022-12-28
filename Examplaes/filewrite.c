#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *randomnumber;
	int i;
	
	randomnumber = rand() % 10;
	randomnumber = fopen("avg.txt","w");

    
	for(i=1;i<=200;i++)
		fprintf(randomnumber,"%d\n",i);
		fclose(randomnumber);
		return 0;	
}
