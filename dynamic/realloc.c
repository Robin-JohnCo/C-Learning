#include <stdio.h>
#include <stdlib.h>

void print_budget(double* budget, int size);

void demo_realloc()
{
	int size = 3;

	double* budget = (double*)malloc(size * sizeof(double));

	if (budget == NULL) {
		perror("Failed to malloc budget");
		exit(EXIT_FAILURE);
	}

	budget[0] = 10000;
	budget[1] = 15000;
	budget[2] = 10300;

	print_budget(budget, size);

	int new_size = 5;

	double* new_budget = (double*)realloc(budget, new_size * sizeof(double));
	if (new_budget == NULL) {
		perror("Failed to realloc new budget");
		free(budget);
		exit(EXIT_FAILURE);
	}

	budget = new_budget;

	budget[3] = 14000;
	budget[4] = 16000;

	print_budget(budget, new_size);

	free(budget);
	return 0;
}
void print_budget(double* budget, int size) {

	for (size_t i = 0; i < size; i++) {
		printf("The emplyee %zd : $%.2f\n", i + 1, budget[i]);
	}
}