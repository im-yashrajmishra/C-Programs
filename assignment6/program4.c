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
    token = strtok(string, " ");
    while (token != NULL)
    {
        n++;
        token = strtok(NULL, " ");
    }
    char st[n][100];
    strcpy(string, temp);
    token = strtok(string, " ");
    n=0;
    while (token != NULL)
    {
        strcpy(st[n], token);
        token = strtok(NULL, " ");
        n++;
    }
    int arr[100],j=0;
    for(int i=0;i<100;i++)
        arr[i]=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if((i!=j)&&(strcmp(st[i], st[j])==0)) arr[i]=1;
    for(int i=0;i<n;i++)
        if(arr[i]!=1)   printf("%s ", st[i]);
    printf("\n");
    return 0;
}

