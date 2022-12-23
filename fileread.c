#include<stdio.h>

int main(){
	FILE *fp = fopen("Demo.txt","r");
	int i = 0,n;
	int a[100];
	
	for(i=0;!feof (fp);i++){
		fscanf(fp,"%d",&a[i]);
	}
	n=i-1;
	
	for(i=0;i<50;i++){
		printf("\n %d",a[i]);
	}
	fclose(fp);
	return 0;
}
