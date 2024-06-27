#include<stdio.h>
#include<string.h>
int main()
{
	int l, ls;
	printf("Enter size of string: ");
	scanf("%d", &l); 
	getchar();
	char st[l];
	printf("Enter the string: ");
	fgets(st, l+1, stdin);
        if(st[l]=='\n')       st[l]='\0';
        printf("Enter size of substring string: ");
        scanf("%d", &ls);
        getchar();
        char sst[ls];
        printf("Enter the substring: ");
        fgets(sst, ls+1, stdin);
	getchar();
	if(sst[ls]=='\n')	sst[ls]='\0';
	char ch;
        printf("Enter the character: ");
        scanf("%c", &ch);
	getchar();
	int i1=-1,i2=-1;
	for(int i=0;i<=(l-ls);i++)
		if(st[i]==sst[0])
		{
			int flag=0;
			for(int j=0;j<ls && flag==0;j++)
				if(st[i+j]!=sst[j])	flag=1;
			if(flag==0)
			{
				i1=i;
				break;
			}
		}
	printf("Index of occurence of substring %s in string %s is: %d\n",sst,st,i1);
        for(int i=0;i<l && i2==-1;i++)
                if(st[i]==ch)	i2=i;
        printf("Index of occurence of character %c in string %s is: %d\n",ch,st,i2);


}
