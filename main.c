#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Recursively print string characters in reverse order
void reversePrint(char *text,int length)
{
    if(length==0)
    {
        printf("%c",text[length]);
    }
    else
    {
        printf("%c",text[length]);
        reversePrint(text,length-1);
    }
}

int main()
{
    char sentence[100];

    printf("Enter a sentence:\n");
    gets(sentence);

    printf("Length:%d\n",(int)strlen(sentence));
    reversePrint(sentence,strlen(sentence)-1);

    return 0;
}
