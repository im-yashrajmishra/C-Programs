#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,temp;
	int l=0;
	printf("Enter a number: ");
	scanf("%lld", &n);
	temp=n;
	while(temp>0)
	{
		temp/=10;
		l++;
	}
	temp = (n*n)%((long long int)pow(10, l));
	if(temp!=n)	printf("%lld is not an Automorphic number\n", n);
	else	printf("%lld is an Automorphic number\n", n);
}
