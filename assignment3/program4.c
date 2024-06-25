#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,temp,ans=0;
	int l=0;
	printf("Enter a number: ");
	scanf("%lld", &n);
	temp=n;
	while(temp>0)
	{
		temp/=10;
		l++;
	}
	temp=n;
        while(temp>0)
        {
		ans+=(long long int)pow(temp%10, l);
                temp/=10;
  	}
	if(ans!=n)	printf("%lld is not an Armstrong number\n", n);
	else	printf("%lld is an Armstrong number\n", n);
}
