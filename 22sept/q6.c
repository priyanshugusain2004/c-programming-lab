#include <stdio.h>

long long factorial(int n) {
    printf("factorial(%d) called\n", n);
    
    if (n <= 1) {
        printf("Base case reached. Returning 1\n");
        return 1;
    }
    
    long long result = n * factorial(n - 1);
    printf("factorial(%d) returning %lld\n", n, result);
    return result;
}

int main() {
    int num = 5;
    long long fact;

    printf("Calculating factorial for %d:\n", num);
    fact = factorial(num);
    printf("\nFinal Result: %d! = %lld\n", num, fact);

    return 0;
}
