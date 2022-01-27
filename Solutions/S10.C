/* WAP TO PERFORM THE SELECTION SHORT ON ARRAY OF 10 NUMWEIC VALUE
DATE:26/01/2022 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,j,po,sw;
	clrscr();
	printf("enter number of elemnt:");
	scanf("%d",&n);
	printf("\n enter %d integer:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		po=i;
		for(j=i+1;j<n;j++)
		{
			if(a[po]>a[i])
			po=j;
		}
		if(po!=i)
		{
			sw=a[i];
			a[i]=a[po];
			a[po]=sw;
		}
	}
	printf("\n sort list in disending order:");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	getch();
}
