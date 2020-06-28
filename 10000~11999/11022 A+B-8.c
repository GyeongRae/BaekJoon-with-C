#include <stdio.h>
int main()
{
	int a;
	int b;
	int set;
	int x=0;
	int c;
	
	scanf("%d", &set);
	for(;set>=1;set-=1)
	{	
		a=0;
		b=0;
		c=0;
		x+=1;
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", x, a,b,a+b);
	}
	return 0;
}
