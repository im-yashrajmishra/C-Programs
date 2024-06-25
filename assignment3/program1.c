#include<stdio.h>
int main()
{
	long long int n;
	int sum=0;
	printf("Enter a positive interger: ");
	scanf("%lld", &n);
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	printf("Sum of digits is: %d\n", sum);
}
