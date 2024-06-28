#include<stdio.h>
typedef struct product{
	int id;
	int sa;
} pro;

int main()
{
	int n;
	printf("Enter number of records: ");
	scanf("%d", &n);
	pro p[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d", &p[i].id);
		scanf("%d", &p[i].sa);
	}
	for(int i=0;i<n;i++)
	{
		if(p[i].id==-1)	continue;
		for(int j=i+1;j<n;j++)
			if(p[i].id==p[j].id)
			{
				if(p[i].sa<p[j].sa)	p[i].sa=p[j].sa;
				p[j].id=-1;
			
			}
	}
	for(int i=0;i<n;i++)
	{
		if(p[i].id==-1)	continue;
		for(int j=i+1;j<n;j++)
			if((p[j].id!=-1)&&(p[i].sa<p[j].sa))
			{
				pro temp = p[i];
				p[i]=p[j];
				p[j]=temp;
			}
	}
	for(int i=0;i<n;i++)
		if(p[i].id!=-1)	printf("P%d-%d\n",p[i].id,p[i].sa);
	return 0;
}
