#include <stdio.h>
int any(char s1[],char s2[]);
int main(void)
{
    printf("請輸入A字串\t:");
    char s1[100];
    gets(s1);

    printf("請輸入B字串\t:");
    char s2[100];
    gets(s2);
    printf("s1中第一個出現的任一s2字符之位置，若沒有則回傳-1\t:%d",any(s1,s2));
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
