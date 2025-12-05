#include <stdio.h>
int main()
{
	int n = 3;
	if (n == 3)
	{
		goto next;
		printf("It is not three\n");
	}
	next:
		printf("It is three\n");
		return 0;
	}
