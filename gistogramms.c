#include <stdio.h>

int main()
{
    int word_leangth = 0;
    char c;
    int i;
    
    while((c = getchar()) != '\n')  // read one string (line)
    {
        if (c != ' ')               // if symbol is not space
            word_leangth++;     //+1 word letter
        else
        {
            for(i = 0; i < word_leangth; i++)    // print the length of the word with horizontal sticks
                printf("_");
            printf("\n");        // go to the next line
            word_leangth = 0;
        }
    }

    for(i = 0; i < word_leangth; i++) // print length of the last word
        printf("_");                  // it ends with this symbol, not space

    printf("\nPress any kay to exit\n");
    
    return 0;
}