#include<stdio.h>
#include<time.h>
void main()
{
	//Time complexcity
	clock_t start,end;
	double cpu_time_used;
	int t1 = 0, t2 = 1,i,n;
  	int nextTerm = t1 + t2;
  	printf("Enter the number of terms: ");
  	scanf("%d", &n);

    printf("Fibonacci Series: %d, %d, ", t1, t2);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
	start= clock();
	end = clock();
	cpu_time_used=((double) (end-start)) / CLOCKS_PER_SEC;
	printf (" time = %lf ", cpu_time_used );	
}
