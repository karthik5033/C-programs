#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], sub[100], new[100];
    int i = 0, n = 0, j, m, k;
    printf("enter the string : ");
    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("enter the string to be inserted: ");
    fgets(sub, sizeof(sub), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("enter the position to be inserted : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        new[i] = str[i];
    }
    k = strlen(sub);
    while (sub[i] != '\0' && i < strlen(sub))
    {
        new[k] = sub[i];
        k++;
        i++;
    }
    m = strlen(new);
    i = n;
    while (str[i] != '\0' && i < strlen(str))
    {
        new[m] = str[i];
        i++;
        m++;
        if (m == strlen(str))
        break;
    }
    printf("The new string is : %s",new);
    return 0;
}