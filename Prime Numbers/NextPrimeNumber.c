#include<stdio.h>

void main()
{
	int i,j,flag=0,n,count=0;
	printf("Enter the number to find prime");
	scanf("%d",&n); 
	for(i=n+1;;i++)
	{
		count=0;
		for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					count ++;
					break;
				}
				
			}
			if(i==j)
			{
					printf("\n next prime number is %d",i);
					break;
			}
			
	}
	
}
