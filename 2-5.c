#include <stdio.h>
int any(char s1[],char s2[]);
int main(void)
{
    printf("�п�JA�r��\t:");
    char s1[100];
    gets(s1);

    printf("�п�JB�r��\t:");
    char s2[100];
    gets(s2);
    printf("s1���Ĥ@�ӥX�{�����@s2�r�Ť���m�A�Y�S���h�^��-1\t:%d",any(s1,s2));
}
int any(char s1[], char s2[])
{
    int i, j;
    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
                return i;
        }
    }
    return -1;
}
