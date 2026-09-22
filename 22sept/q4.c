#include<stdio.h>

    int isprime(int num)
    {
        if (num <= 1)
            return 0;
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
                return 0;
        }
        return 1;
    }
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d\t%d\n",n, isprime(n));
    return 0;
}