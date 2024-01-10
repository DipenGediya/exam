#include<stdio.h>

main()
{
	int f = 1,n,i;
	
	printf("Enter the number = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		f = f * i;
	}
	
	printf("%d",f);
}
