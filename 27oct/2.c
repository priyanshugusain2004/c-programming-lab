#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int simple_number = 10;

	printf("Simple variable: %d\n\n", simple_number);

	size_t count;

	printf("Enter the number of elements: ");
	if (scanf("%zu", &count) != 1 || count == 0) {
		return 1;
	}

	int *numbers = malloc(count * sizeof *numbers);
	if (numbers == NULL) {
		fprintf(stderr, "malloc failed.\n");
		return 1;
	}

	for (size_t i = 0; i < count; ++i) {
		printf("Enter element %zu: ", i + 1);
		if (scanf("%d", &numbers[i]) != 1) {
			free(numbers);
			return 1;
		}
	}

	int *zeros = calloc(count, sizeof *zeros);
	if (zeros == NULL) {
		fprintf(stderr, "calloc failed.\n");
		free(numbers);
		return 1;
	}

	size_t new_count = count + 1;
	int *resized_numbers = realloc(numbers, new_count * sizeof *resized_numbers);
	if (resized_numbers == NULL) {
		fprintf(stderr, "realloc failed.\n");
		free(zeros);
		free(numbers);
		return 1;
	}
	numbers = resized_numbers;
	numbers[count] = 0;

	printf("Elements: ");
	for (size_t i = 0; i < new_count; ++i) {
		printf("%d%s", numbers[i], i + 1 == new_count ? "\n" : " ");
	}

	printf("calloc values: ");
	for (size_t i = 0; i < count; ++i) {
		printf("%d%s", zeros[i], i + 1 == count ? "\n" : " ");
	}

	free(zeros);
	free(numbers);
	return 0;
}
