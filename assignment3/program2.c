#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,temp1,temp2;
	printf("Enter a number: ");
	scanf("%lld", &n);
	temp1 = (long long int)floor(sqrt(n));
	temp2 = (long long int)ceil(sqrt(n));
	if(n-((temp1*temp1))<=((temp2*temp2)-n))	printf("Nearest number is: %lld\n", temp1*temp1);
	else	printf("Nearest number is: %lld\n", temp2*temp2);
}
