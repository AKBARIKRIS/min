#include<stdio.h>
#include<conio.h>

main()
{

  int a=10,b=20,c=30,d=40,e=50;
  clrscr();
  if (a<b)
  {
	if(a<c)
	{
		if(a<d)
		{
			if(a<e)
			{
				printf("a is min ");
			}
			else
			{
				printf("e is min ");
			}
		}
		else
		{
			printf("d is min");
		}
	}
	else
	{
		printf("c is min ");
	}
  }
  else
  {
	printf("b is min ");
  }


  getch();
 }