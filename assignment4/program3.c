#include<stdio.h>
#include<string.h>
int main()
{
	int l;
	printf("Enter size of string: ");
	scanf("%d", &l); 
	getchar();
	char st1[l],st2[l],st[l];
	printf("Enter the string: ");
	fgets(st1, l+1, stdin);
	if(st1[l]=='\n')	st1[l]='\0';
	strcpy(st, st1);
	char* token;
	token = strtok(st1, " ");
	int j=l-1;
    	st2[l]='\0';
	while (token != NULL) 
	{
		int n = strlen(token);
		for(int k=0;k<n;k++)
			st2[j-n+1+k]=token[k];
		if((j-n)>=0)	st2[j-n]=' ';
		j=j-n-1;		
        	token = strtok(NULL, " ");
    	}
	printf("String before reversing order of words: %s\n", st);
	printf("String after reversing order of words: %s\n", st2);
}
