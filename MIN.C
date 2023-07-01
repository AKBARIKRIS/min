#include<stdio.h>
#include<conio.h>
 void main()
{
  int a=10,b=20,c=30;
  clrscr();

  if(a<b)
  {
    if(a<c)
    {
      printf("a is min ");
    }
    else
    {
      printf("b is min ");
    }
  }
  else
  {
     if(b<c)
     {
     printf("b is min ");
     }
     else
     {
     printf("c is min ");
     }
  }
  getch();
}

