#include<stdio.h>

int main()
{
    char str[100];
    int count[256] = {0};
    int i;
    printf("str: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        count[str[i]]++;
    }
    for(i = 0; str[i] != '\0'; i++)
    {
        if(count[str[i]] > 1)
        {
            printf("%c:%d\n", str[i], count[str[i]]);
            count[str[i]] = 0;
        }
    }
}
