#include<stdio.h>

main()
{
	char data[100];
	int *p = &data;
	
	fopen("append.txt","a");
	
	if(p==0)
	{
		printf("File not open");
	}
	else
	{
		printf("Enter the data = ");	
		gets(data);
		puts("\n");
		fputs(data,p);	
	}
	
	fclose(p);
	
	
	printf("----------------- reading -------------");
	
	fopen("append.txt","r");
	
	if(p==0)
	{
		printf("File not open");
	}
	else
	{
		for(int i=0;(data,5,p)!=NULL;p++)
		{
			printf("%s",data);
		}
	}
		
}
