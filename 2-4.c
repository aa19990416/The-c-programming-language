#include <stdio.h>
/*刪除A字串中有B字串的字*/
void squeeze(char s[], char b[]);
int main(void)
{
    printf("請輸入A字串\t:");
    char a[100];
    gets(a);

    printf("請輸入B字串\t:");
    char b[100];
    gets(b);

    squeeze(a, b);
    printf("新的A字串\t:%s", a);
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
