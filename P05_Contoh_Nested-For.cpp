/* ----------------------------- */
/* Program Nested-For	*/
/* ----------------------------- */
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
	int a,b;
	clrscr();
	for (a=1; a<=5; a++)
   {
   	printf("\n");
      for (b=1; b<=5; b++)
      printf(" %d ",a);
   }
	getch();
}
