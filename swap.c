#include<stdio.h>

main()
{
	int a,b,swap;
	
	printf("Enter value of A = ");
	scanf("%d",&a);
	
	printf("Enter value of B = ");
	scanf("%d",&b);
	
	int *p = &a;
	int *p1 = &b;
	
	printf("before swapping : \n");
	printf("A = %d\n",*p);
	printf("B = %d\n",*p1);
	
	swap = *p;
	*p = *p1;
	*p1 = swap;
	
	printf("after swapping : \n");
	printf("A = %d\n",*p);
	printf("B = %d\n",*p1);
}
