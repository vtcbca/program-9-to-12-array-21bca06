/* WAP TO PERFORM THE BUBBLE SHORT ON ARRAY OF 10 NUMWEIC VALUE
DATE:26/01/2021 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i;
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("enter a value of a element a[%d]:",i);
		scanf("%d",&a[i]);
	}
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
		getch();
}