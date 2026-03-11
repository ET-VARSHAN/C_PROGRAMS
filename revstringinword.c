#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, start, end;
    printf("Enter string: ");
    fgets(str,50,stdin);
    i = 0;
    while(str[i] != '\0')
        i++;
    end = i - 1;
    while(end >= 0)
    {
        if(str[end] == ' ')
        {
            start = end + 1;

            while(str[start] != '\0' && str[start] != ' ')
            {
                printf("%c", str[start]);
                start++;
            }
            printf(" ");
        }
        end--;
    }
    start = 0;
    while(str[start] != ' ' && str[start] != '\0')
    {
        printf("%c", str[start]);
        start++;
    }
}
