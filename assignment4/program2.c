#include<stdio.h>
#include<string.h>
int main()
{
	int l;
	printf("Enter size of strings: ");
	scanf("%d", &l); 
	getchar();
	char st1[l],st2[l];
	printf("Enter string1: ");
	fgets(st1, l+1, stdin);
	if(st1[l]=='\n')	st1[l]='\0';
        getchar();
	printf("Enter string2: ");
        fgets(st2, l+1, stdin);
        if(st2[l]=='\n') st2[l]='\0';
	int arr1[128],arr2[128];
	for(int i=0;i<128;i++)
		arr1[i]=0;
	for(int i=0;i<l;i++)
		arr1[st1[i]]++;
        for(int i=0;i<128;i++)
                arr2[i]=0;
        for(int i=0;i<l;i++)
                arr2[st2[i]]++;
	int flag=0;
	for(int i=0;i<128;i++)
		if(arr1[i]!=arr2[i])
		{
			//printf("%c    %d    %d\n", i,arr1[i],arr2[i]);  
			flag=1;
			break;
		}
	if(flag==0)	printf("Strings %s & %s are anagrams of each other\n", st1, st2);
        else	printf("Strings %s & %s are not anagrams of each other\n", st1, st2);
}
