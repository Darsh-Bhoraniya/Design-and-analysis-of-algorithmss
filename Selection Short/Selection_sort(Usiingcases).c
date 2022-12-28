#include<stdio.h>
void main(){
	int a[10],i,minj,minx,j,num;
	printf("Please Enter The elment in arry ");
	scanf("%d", &num);
    FILE *fp = fopen("bestcase.txt","r");
    for(i = 0; i < num; i++){
	fscanf(fp,"%d", &a[i]);
	}	
	for(i=1;i<num-1;i++){
		minj=i;
		minx=a[i];
		for(j=i+1;j<num;j++){
			if(a[j]<minx){
				minj=j;
				minx=a[j];
			}
		}
	a[minj]=a[i];
	a[i]=minx;			
	}
	
    printf("after Selection short sorting");
    for(i = 0; i < num; i++){
        printf("%d  ", a[i]);
    }
}
