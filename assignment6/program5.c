// C program to illustrate
// strcpy() function in C
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char *token;
    printf("Enter length of string: ");
    scanf("%d", &n);
    getchar();
    printf("Enter the string: ");
    char string[n+1], temp[n+1];
    fgets(string, n+1, stdin);
    if(string[n]=='\n') string[n]='\0';
    strcpy(temp, string);
    n=0;
    token = strtok(string, "|");
    while (token != NULL)
    {
        n++;
        token = strtok(NULL, "|");
    }
    char st[n][100];
    strcpy(string, temp);
    token = strtok(string, "|");
    n=0;
    while (token != NULL)
    {
        strcpy(st[n], token);
        token = strtok(NULL, "|");
        n++;
    }
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(strcmp(st[i], st[j])<0)
            {
                char str[strlen(st[i])];
                strcpy(str, st[i]);
                strcpy(st[i], st[j]);
                strcpy(st[j], str);
            }
    for(int i=n-1;i>=0;i--)
        printf("%s|", st[i]);
    printf("\n");
    return 0;
}
