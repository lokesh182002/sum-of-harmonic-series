#include<stdio.h>
void main()
{
	float i,n,sum; 
	printf("\n enter value n:");
	scanf("%f",&n);
	i=1;
	sum=0;
	while(i<=n)
	{
		sum=sum+(1.0/i);
		i=i+1;
	}
	printf("\n sum=%f",sum);
}
