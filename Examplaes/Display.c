#include<stdio.h>
#include<time.h>
void main()
{
	//Time complexcity
	clock_t start,end;
	double cpu_time_used;
	
	int n,i;

	printf("Enter Value = ");
	scanf("%d",&n);
	start= clock();
	for	( i = 1;i<=n;i++){
		printf("\n value %d ",i);
	}
	end = clock();
	cpu_time_used=((double) (end-start)) / CLOCKS_PER_SEC;
	printf (" time = %lf ", cpu_time_used );
	
}
