#include <stdio.h>

int main()
{
    int tab, space, newstr;
    int c;
    tab =0;
    space = 0;
    newstr = 0;
    while((c = getchar()) != EOF)
    {
        if(c == '\t')
            ++tab;
         else if(c == ' ')
            ++space;
        if(c == '\n')
            ++newstr;
    }
    printf("tab = %d\nspace = %d\nnewstr = %d\n", tab, space, newstr);
    return 0;
}