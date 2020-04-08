#include<stdio.h>

void main()
{
	int n,last_digit,dec_value=0,base=1;	
	printf("Enter binary Number ");
	scanf("%d",&n);
	while(n!=0)
	{	
		last_digit=n%10;
		n=n/10;
		dec_value=dec_value+last_digit*base;
		base=base*2;
		
	 	
	}	
	printf("\n decimal number is %d",dec_value);
}
