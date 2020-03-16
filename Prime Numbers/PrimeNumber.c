#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void main()
{
	int i,j,n,count;
	printf("Enter the number to find prime Numebes");
	scanf("%d",&n);
	
	printf("prime number from 1 to %d are : \n ",n);
	for(i=1;i<n;i++)
	{
	 
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(i==j)
		{
			printf("%d \t ",i);	
			count++;		 	 
		}
	}
	
	printf("\n total prime number found are :%d ",count);
}
 
