#include <stdio.h>
#include <stdlib.h>

typedef struct Employee {
	char* name;
	int* task_list;
	int task_conut;
}Employee;

Employee* create_workid(const char* name, int task_count);

void free_employee(Employee* employee);

void demo_calloc() {

	Employee* robin = create_workid("Robin", 5);
	if (robin == NULL) {
		return EXIT_FAILURE;
	}
	robin->task_list[0] = 101;

	printf("Assigned ID %s for task %d", robin->name, robin->task_list[0]);

	return EXIT_SUCCESS;
}
Employee* create_workid(const char* name, int task_count) {
	Employee* new_employee = (char*)malloc(sizeof(Employee));
	if (new_employee == NULL) {
		perror("Failed to allocate memory for new Employee name");
		exit NULL;
	}

	new_employee->name = (char*)malloc(strlen(name) + 1);
	if (new_employee->name == NULL) {
		perror("Failed to allocate memory for new Employee name");
		free(new_employee);
		exit NULL;
	}

	strcpy_s(new_employee->name, strlen(name) + 1, name);

	new_employee->task_conut;
	new_employee->task_list = (int*)calloc(task_count, sizeof(int));
	if (new_employee->task_list == NULL) {
		perror("Failed to allocate memory for task list");
		free(new_employee->name);
		free(new_employee);
		exit NULL;
	}
	return new_employee;
}
void free_employee(Employee* employee) {
	if (employee == NULL) {
		free(employee->name);
		free(employee->task_list);
		free(employee);
	}
}