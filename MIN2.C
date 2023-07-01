#include<stdio.h>
#include<conio.h>
 void main()
{
  int a=100,b=200,c=300,d=40;
  clrscr();
  if(a<b)
  {
    if(a<c)
    {
	if(a<d)
	{
		printf(" a is min");
	}
	else
	{
		printf(" d is min ");
	}
     }
    else
    {
	printf(" c is min");
    }
  }
    else
   {
    printf("b is min");
   }
   getch();
}


