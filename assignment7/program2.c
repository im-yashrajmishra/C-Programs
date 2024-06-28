#include<stdio.h>
typedef struct product{
	int id;
	int sa;
	int cou;
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
		p[i].cou = 1;
	}
	for(int i=0;i<n;i++)
	{
		if(p[i].id==-1)	continue;
		for(int j=i+1;j<n;j++)
			if(p[i].id==p[j].id)
			{
				p[i].cou+=p[j].cou;
				p[i].sa+=p[j].sa;
				p[j].id=-1;
			
			}
	}
	for(int i=0;i<n;i++)
		if(p[i].id!=-1)	printf("S%d-%.2f\n",p[i].id,(p[i].sa+0.0)/p[i].cou);
	return 0;
}
