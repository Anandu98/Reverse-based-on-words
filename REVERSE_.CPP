#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void reverse(char str[], int first, int last)
 {
	char temp;
	while (first <= last)
	{
		temp = str[first];
		str[first] = str[last];
		str[last] = temp;
		first ++;
		last --;
	}
}

void reverseletter(char str[], int first, int last)
{

	int wfirst, wlast;
	for (wfirst = wlast = first; wlast < last; wlast ++)
	{

		if (str[wlast] == ' ')
		continue;
		while (str[wlast] != ' ' && wlast <= last)
		wlast++;
	wlast--;
	reverse(str, wfirst, wlast);
	}
}

void main()
{
	clrscr();
	char a[50];
	cout<<"Enter a string : ";
	gets(a);
	for(int i=0;a[i]!='\0';++i);
	reverseletter(a, 0,i-1);
	puts(a);
	getch();
}
