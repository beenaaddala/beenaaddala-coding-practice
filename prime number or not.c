#include<stdio.h>
int main()
{
	int num,factor =0,i;
	printf("ente value of num:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			factor=factor+1;
		}
	}
	if(factor>2)
	{
		printf("prime number");
	}
	else{
		printf("not a prime number");
	}
	return 0;
}