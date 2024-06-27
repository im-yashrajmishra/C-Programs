#include <stdio.h>
#include <string.h>

int main() 
{
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    char st[n][100];
    printf("Enter the strings: \n");
    for(int i=0;i<n;i++)
        scanf("%s", st[i]);
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
        printf("%s ", st[i]);
    printf("\n");
    return 0;
}

