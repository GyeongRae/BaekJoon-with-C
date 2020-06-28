#include <stdio.h>

int main()
{
	int hour, minute;
	int set=45;
	scanf("%d %d", &hour,&minute);
	minute-=set;
	if(minute<0)
	{
		hour-=1;
		minute+=60;
		if(hour<0)
		{
			hour=23;
			printf("%d %d", hour,minute);
		}
		else
		{
			printf("%d %d",hour,minute);
		}
		
	}
	else
	{
		printf("%d %d", hour,minute);
	}
	return 0;
}
