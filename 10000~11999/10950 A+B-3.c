#include <stdio.h>

int main()
{
	int a, b,set;
	scanf("%d", &set);
	for(;set>0;set--)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
	return 0;
}
