#include<stdio.h>
int main()
{
	int a=10;
	int *p=&a;
	printf("address of a:%p\n",&a);
		printf("address by using pointer:%p\n",&a);
		p++;
		printf("after increament address is:p\n",p);
		return 0;
}