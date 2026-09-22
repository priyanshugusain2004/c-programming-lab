#include <stdio.h>

int main(void)
{
	int n;
    printf("Enter a number: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i == 50)
			break;
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}

	return 0;
}
