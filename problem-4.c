#include <stdio.h>
#include <string.h>

int is_palindrome(char s1[])
{
    char s2[1001];
    int length = strlen(s1);

    for (int i = 0; s1[i] != 0; i++)
    {
        s2[i] = s1[i];
    }

    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        int temp;
        temp = s1[i];
        s1[i] = s1[j];
        s1[j] = temp;
    }

    int flag = 1;

    for (int i = 0; i < length; i++)
    {
        if (s1[i] != s2[i])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{

    char s1[1001];
    scanf("%s", s1);
    int result = is_palindrome(s1);

    if (result == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}