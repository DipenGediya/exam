#include<stdio.h>

leap(int n)
{
	if(n%4==0)
	{
		printf("%d year is leap year",n);
	}
	else
	{
		printf("%d is not leap year",n);
	}
}

main()
{
	int n;
	
	printf("Enter year = ");
	scanf("%d",&n);
	
	leap(n);
}
