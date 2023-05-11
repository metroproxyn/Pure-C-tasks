#include <stdio.h>
#define MAXLINE 1000 // max size of the input string

int getlin(char line[], int MAX);

/*print string with more then 10 characters*/
int main()
{
    int len; // длина текущей строки
    char line[MAXLINE]; // текущая строка
    while((len=getlin(line, MAXLINE))>0)
        if((len-1)>10)
            printf("Эта строка больше 10 символов: %s\n", line);
    return 0;
}

/*getline read string in s, returns length*/
int getlin(char s[], int lim)
{
    int c, i;
    for(i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; i++)
        s[i]=c;
    if(c=='\n')
    {
        s[i]=c;
        i++;
    }
    s[i] = '\0';
    return i;
}
