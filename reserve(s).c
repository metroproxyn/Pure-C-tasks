/* 1.19 Write a reverse (s) function that puts the characters
in the string s in reverse order.
Use it to write a program that puts each
input string is placed in reverse order. */
#include <stdio.h>
#define MAXLINE 1000

int getline (char string[], int length);
void reserve (char string[]);

int main (void)
{
	int len;
	char line[MAXLINE];
	while ((len = getline(line, MAXLINE)) > 0)
	{
		reserve (line);
		printf ("%s\n", line);
	}
	return 0;
}

int getline (char s[], int len)
{
	int c, i;
	for (i = 0;
		 i < len - 1 && (c = getchar()) != EOF && c != '\n';
		 ++i)
	  s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return 0;
}

void reverse (char string[])
{
	int i, j;
	char temp;
	i = j = 0;
	while (string[j] != '\0' && string[j] != '\n')
		++j;
	for (i = 0, --j; i < j; ++i, --j)
	{
		temp = string[i];
		string[i] = string[j];
		string[j] = temp;
	}
}