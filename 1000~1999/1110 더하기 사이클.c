#include <stdio.h>
int main()
{
	int num2,num1,num3,set=0,fnum;
	int i=0;
	scanf("%d", &fnum);
	num3=fnum;
	while(1)
	{
		num1=0,num2=0;
		num1=num3/10;
		num2=num3%10;
		if(num1+num2>=10)
		{
			num3=num2*10+(num1+num2)%10;
		}
		else
		{
			num3=num2*10+num1+num2;
		}
		set++;
		if(fnum==num3)
		{
			printf("%d", set);
			break;
		}
	}
	
	return 0;
}
