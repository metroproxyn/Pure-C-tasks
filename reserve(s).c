/* 1.19 Напишите функцию reverse (s), размещающую символы
в строке s в обратном порядке.
Примените ее при написании программы, которая каждую
вводимую строку располагает в обратном порядке. */
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