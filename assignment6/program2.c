#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int l;
	printf("Use 24 hours format for entering time below\n");
	char st1[10],st2[10];
	printf("Enter time1 in format(hh|mm|ss): ");
	scanf("%s", st1);
	getchar();
	l=strlen(st1);
	if(st1[l-2]=='\n')	st1[l-2]='\0';
	printf("Enter time2 in format(hh|mm|ss): ");
        scanf("%s", st2);
	l=strlen(st2);
        if(st2[l-2]=='\n') st2[l-2]='\0';
	int t1[3],t2[3],j=0;
	char *token;
	printf("time1: %s\n", st1);
        printf("time2: %s\n", st2);
	token = strtok(st1, "|");
    	while (token != NULL) 
	{
        	t1[j++]=atoi(token);
        	token = strtok(NULL, "|");
    	}
	j=0;
        token = strtok(st2, "|");
        while (token != NULL)
        {
                t2[j++]=atoi(token);
        	token = strtok(NULL, "|");
	}
        if(t1[0]<t2[0]) printf("early\n");
        else if(t1[0]>t2[0])    printf("late\n");
        else
        {
                if(t1[1]<t2[1]) printf("early\n");
                else if(t1[1]>t2[1])	printf("late\n");
		else
		{
			if(t1[2]<t2[2])	printf("early\n");
			else	printf("late\n");
		}
	}
}
