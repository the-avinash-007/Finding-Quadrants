//This program has been coded by Avinash Shandilya in VSCode IDE.
//Program to accept coordinates from the user in X,Y format and determine that it lies in which quadrant.

#include<stdio.h>
int main(int argc, char const *argv[])
{
int co1,co2;

	printf("Input the values for X and Y coordinate : ");
	scanf("%d %d",&co1,&co2);

	if( co1 > 0 && co2 > 0)
	  printf("The coordinate point (%d,%d) lies in the First quandrant.\n",co1,co2);
	else if( co1 < 0 && co2 > 0)
	  printf("The coordinate point (%d,%d) lies in the Second quandrant.\n",co1,co2);
	else if( co1 < 0 && co2 < 0)
	  printf("The coordinate point (%d, %d) lies in the Third quandrant.\n",co1,co2);
	else if( co1 > 0 && co2 < 0)
	  printf("The coordinate point (%d,%d) lies in the Fourth quandrant.\n",co1,co2);
	else if( co1 == 0 && co2 == 0)
	  printf("The coordinate point (%d,%d) lies at the origin.\n",co1,co2);
    return 0;
}
