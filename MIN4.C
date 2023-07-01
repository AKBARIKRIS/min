#include<stdio.h>
#include<conio.h>

main()
{ int a=10,b=20,c=30;
  clrscr();
  (a>b)?(a>c)? printf("a is max ") :printf("c is max ")
       :(b>c)? printf("b is max ") :printf("c is max ");
  getch();
  }