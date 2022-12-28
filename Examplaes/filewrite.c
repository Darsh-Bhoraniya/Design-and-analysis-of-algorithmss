#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *Avragenum;
	int i;
	
	Avragenum = fopen("avgrage.txt","w");

    
	for(i=200;i>1;i--)
		fprintf(Avragenum,"%d\n",i);
		fclose(Avragenum);
		return 0;	
}
