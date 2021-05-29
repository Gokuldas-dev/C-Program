#include <cs50.h>
#include <stdio.h>
int main(void)
{
	int rows,choice,i,j,p;
	choice=get_int("Enter type of pattern (1 or 2) ");
	switch(choice)
	{
		case 1 :rows=get_int("Number of rows");
			i=rows;
			while(i>=1)
			{	
				j=i;
				while(j>=1)
				{
					printf("#");
					j--;
				}
				printf ("\n");
				i--;	
			}
			break;
		case 2 :rows=get_int("Number of rows");
			i=1;
			while(i<=rows)
			{
				j=1;
				p=rows-i;
				while(p>=1)
				{
					printf(" ");
					p--;
									}
				while(j<=i)
					{
						printf("#");
						j++;
					}
				printf("\n");
				i++;
			}
			break;
		default :printf("invalid pattern!\n");
	}
		
}
