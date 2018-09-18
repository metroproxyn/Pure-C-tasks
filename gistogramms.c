#include <stdio.h>

int main()
{
    int word_leangth = 0;
    char c;
    int i;
    
    while((c = getchar()) != '\n')  //читаем одну строку
    {
        if (c != ' ')               //если символ не пробел
            word_leangth++;     //+1 буковка в слове
        else
        {
            for(i = 0; i < word_leangth; i++)    //печатаем длину слова палочками горизонтальными
                printf("_");
            printf("\n");        //переходим на след. строку
            word_leangth = 0;
        }
    }

    for(i = 0; i < word_leangth; i++) //печатаем длину посл. слова
        printf("_");                  //просто оно не заканчивается пробелом, а зак. знаком конца строки

    printf("\nPress any kay to exit\n");
    
    return 0;
}