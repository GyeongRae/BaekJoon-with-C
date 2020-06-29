#include <stdio.h>
int main()
{
	int a,b,set;
	scanf("%d %d", &a,&b);
	for(;a>0;a--)
	{
		scanf("%d",&set);
		if(b>set)
		{
			printf("%d ",set);
		}
	}
	return 0;
}
