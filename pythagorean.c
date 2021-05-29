#include <cs50.h>
#include <stdio.h>
int main(void)
{
	float a,b,c,s,temp;
	a=get_int("side 1 ");
	b=get_int("side 2 ");
	c=get_int("side 3 ");
	if(a>b)
	{
		if(a>c)
		{
			temp=a;
			a=c;
			c=temp;
		}
		
	}
	else if(b>a)
	{
		if(b>c)
		{
			temp=b;
			b=c;
			c=temp;
		}
	}
	s=((a*a)+(b*b));
	if((c*c)==s)
		printf("Yes\n");
	else
		printf("No\n");
}
