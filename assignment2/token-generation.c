#include<stdio.h>
int main()
{
	char st[50];
	char *token;
	int count =0;
	printf("Enter a sentence\n");
	fgets(st,50,stdin);
	int n = strlen(st);
	if(st[n-1]=='\n')	st[n-1]='\0';
	token = strtok(st, '!');
	while(token != NULL)
	{
		printf(


