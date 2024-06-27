#include<stdio.h>
#include<string.h>
int main()
{
	int l;
	printf("Enter size of string: ");
	scanf("%d", &l); 
	getchar();
	char st1[l],st2[l];
	printf("Enter the string: ");
	fgets(st1, l+1, stdin);
	if(st1[l]=='\n')	st1[l]='\0';
	st2[l]='\0';
	for(int i=0;i<l;i++)
		st2[i]=st1[l-1-i];
	int flag=0;
	for(int i=0;i<l;i++)
		if(st1[i]!=st2[i])	flag=1;
	if(flag==0)	printf("String %s is a palindrome string\n", st1);
	else	printf("String %s is not a palindrome string\n", st1);
}
