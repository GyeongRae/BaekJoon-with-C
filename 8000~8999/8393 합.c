#include <stdio.h>
int main()
{
	int num=0;
	int set;

	scanf("%d", &set);
	for(;set>=1;set-=1)
	{
		num=num+set;
	}
	printf("%d", num);
	return 0;
}
