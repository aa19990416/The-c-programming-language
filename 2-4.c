#include <stdio.h>
/*�R��A�r�ꤤ��B�r�ꪺ�r*/
void squeeze(char s[], char b[]);
int main(void)
{
    printf("�п�JA�r��\t:");
    char a[100];
    gets(a);

    printf("�п�JB�r��\t:");
    char b[100];
    gets(b);

    squeeze(a, b);
    printf("�s��A�r��\t:%s", a);
    return 0;
}
void squeeze(char a[], char b[])
{
    int i, j, k;
    for (i = k = 0; a[i] != '\0'; i++)
    {
        for (j = 0; b[j] != '\0' && (b[j] != a[i]); j++)
            ;
        if (b[j] == '\0')
        {
            a[k++] = a[i];
        }
    }
    a[k] = '\0';
}
