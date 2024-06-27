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
	int count1=0,count2=0,ans=0;
	for(int i=0;i<l;i++)
		if((st[i]!='a')&&(st[i]!='e')&&(st[i]!='o')&&(st[i]!='i')&&(st[i]!='u'))	count1++;
        for(int i=0;i<l;i++)
                if((st[i]!='a')&&(st[i]!='e')&&(st[i]!='o')&&(st[i]!='i')&&(st[i]!='u'))
		{
			count2++;
			count1--;
			if(count2>count1)	ans++;
		}
	printf("Number of partitions: %d\n", ans);
}
