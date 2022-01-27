/* WAP to input any string and impliment strlen() and strcmp()
 in a single program
 Date:26/01/2022 */
#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[10],s2[10];
	int len=0,i;
	clrscr();
	printf("\n enter first string: ");
	gets(s1);
	printf("\n enter second string: ");
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	{
		len++;
	}
	printf("\n\n inputted string is %s",s1);
	printf("\n\n lenth of string is %d",len);
	for(i=0;s2[i]!='\0';i++)
	{
		len++;
	}
	printf("\n\n inputted string is %s",s2);
	printf("\n\n lenth of string is %d",len);
	if(strcmp(s1,s2)==0)
	{
		printf("\n\n you entered the same string two line");
	}
	else
	{
		printf("\n\n you entered srting are not same");
	}
	getch();
}