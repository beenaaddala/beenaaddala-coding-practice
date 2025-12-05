#include<stdio.h>
int main()
{
	int roll_number[59],i,key,n;
	printf("Enter n value");
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&roll_number[i]);
	}
	printf("Enter key value");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key == roll_number[i])
		{
			printf("Element found at index %d",i);
			break;
		}
		else
		{
			printf("Element not found");
		}
	}
	return 0;
}