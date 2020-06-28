#include <stdio.h>
int main()
{
	int num;
	int num1;
	int set;
	int set2=0;
	
	scanf("%d", &set);
	for(;set>=1;set-=1)
	{	
		num=0;
		num1=0;
		set2+=1;
		scanf("%d %d", &num, &num1);
		printf("Case #%d: %d\n", set2, num+num1);
	}
	return 0;
}
