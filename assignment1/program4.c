#include <stdio.h>
int main() 
{
    long long bn;
    int dn = 0, base = 1, r;
    printf("Enter a binary number: ");
    scanf("%lld", &bn);
    while (bn != 0) 
    {
        r = bn % 10;
        dn += r * base;
        bn /= 10;
        base *= 2;
    }
    printf("Decimal equivalent: %d\n", dn);
    return 0;
}
