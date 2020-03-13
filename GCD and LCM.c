#include <stdio.h>
int main()
 { 
    int num1, num2, i, gcd, lcm;

    printf(" Enter the two integers: ");
    scanf("%d %d", &num1, &num2);

    for(i=1; i <= num1 && i <= num2; ++i)
    {
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }

    printf(" GCD of %d and %d is %d\n", num1, num2, gcd);
    lcm = (num1 * num2) / gcd;
    printf(" The LCM of two numbers %d and %d is %d.", num1, num2, lcm);
 }
