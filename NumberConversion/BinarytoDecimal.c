#include<stdio.h>

void main()
{
	int n,i=0;	
	printf("Enter Decimal Number ");
	scanf("%d",&n);
	
	while(n>0)
	{
		i=n%2;
		printf("%d",i);
		n=n/2;
			
	}	
	
			
}
