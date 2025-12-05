#include<stdio.h>
int main()
{
	int a[3][3],t[3][3],i,j;
	printf("enter array elements :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			t[i][j]=a[j][i];
		}
	}
	printf("transpose of matrix is :");
	for(i=0;i<3;i++)
     {
     	printf("%d",t[i][j]);
     }
     printf("\n");
 return 0;
 }