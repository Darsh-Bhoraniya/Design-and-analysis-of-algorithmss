#include<stdio.h>
#include<time.h>
void main()
{
	clock_t start,end;
	double cpu_time_used;
	start= clock();
	int myNumbers[] = {25, 50, 75, 100};
	int i;
	
	for (i = 0; i < 4; i++) {
	  printf("%d\n", myNumbers[i]);
	}
	end = clock();
	cpu_time_used=((double) (end-start)) / CLOCKS_PER_SEC;
	printf (" time = %lf ", cpu_time_used );
}
