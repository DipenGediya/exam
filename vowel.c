#include<stdio.h>

main()
{
	int n,i,count = 0;
	char data[100];
	printf("Enter data = ");
	gets(data);

	for(i=0;data!=NULL;i++)	
	{
		if(data == 'a'||'i'||'o'||'u'||'e')
		{
			count++;
		}
		printf("%d",count);
	}

}
