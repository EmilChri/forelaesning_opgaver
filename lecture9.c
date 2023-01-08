#include <stdio.h>
#include <ctype.h>
#include "lecture9.h"

void replace (char* str, char c1, char c2)
{
    /*while(str[i] != '\0')
    {
        if(str[i] == c1)
        {
            str(i) = c2;
        }
        ++i;
    }*/
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if(str[i] == c1)
        {
            str[i] = c2;
        }
    }
}

int main()
{
    char str[] = "foodback";
    printf("%s\n",str);
    replace(str, 'o', 'e');
    printf("%s\n",str);

    char word[] = "HejsamedDIGsa";
    int number_of_lowercase = 0;

    for (int i = 0; word[i] != '\0' ; ++i)
    {
        int temp;
        if ((islower(word[i])) == 1)
        {
            number_of_lowercase += 1;
        }

    }

    printf("%d",number_of_lowercase);
    return 0;
}


void count_lowercase ()
{
    char word[] = "HejsamedDIGsa";
    int number_of_lowercase;
    number_of_lowercase = islower(word);
}