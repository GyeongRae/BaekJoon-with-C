#include <stdio.h>
int main()
{
	int p,fnum=0;
	for(int i=0;i<5;i++)
	{
		scanf("%d", &p);
		if(p<40)
		{
			p=40;
		}
		fnum=fnum+p;
	}
	fnum=fnum/5;
	printf("%d", fnum);
	return 0;
}
