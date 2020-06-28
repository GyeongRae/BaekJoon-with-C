#include <stdio.h>
int main()
{
	int num;
	int num1;
	int set;
	
	scanf("%d", &set);
	for(;set>=1;set-=1)
	{	
		num=0;
		num1=0;
		scanf("%d %d", &num, &num1);
		printf("%d\n", num+num1);
	}
	return 0;
}
