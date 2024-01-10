#include<stdio.h>

struct movie
{
	char title[100];
	char genr[100];
	char language[100];
}


main()
{
	int n,i;
	
	printf("Number of movie = ");
	scanf("%d",&n);
	
	struct movie m[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter the Movie Title = ");
		scanf("%s",&m[i].title);
		printf("Enter the Movie Genr = ");
		scanf("%s",&m[i].genr);
		printf("Enter the Movie Language = ");
		scanf("%s",&m[i].language);
	}
	
	for(i=0;i<n;i++)
	{
		printf("Movie Title = %s\n",m[i].title);
		printf("Movie Genr = %s\n",m[i].genr);
		printf("Movie Language = %s\n",m[i].language);
	}
}
