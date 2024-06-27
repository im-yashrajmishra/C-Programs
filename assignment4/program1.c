#include<stdio.h>
#include<string.h>
int main()
{
	int l;
	printf("Enter size of string: ");
	scanf("%d", &l); 
	getchar();
	char st[l];
	printf("Enter the string: ");
	fgets(st, l+1, stdin);
	if(st[l]=='\n')	st[l]='\0';
	int arr[128],j=0;
	char s[128];
	for(int i=0;i<l;i++)
		arr[st[i]]=1;
	for(int i=0;i<l;i++)
		if(arr[st[i]]>0)
		{
			arr[st[i]]=0;
			s[j++]=st[i];
		}
	//for(int i=0;i<128;i++)
	//	printf("(%c: %d), ", i, arr[i]);
	printf("String before removing dulicates: %s\n", st);
	printf("String after removing duplicates: %s\n", s);
}
