#include <stdio.h>

typedef struct {
	char street[50];
	char city[50];
	char country[50];
}Address;
typedef struct {
	char name[50];
	int age;
	Address address;
}Robin;

void demo_Struct_2()
{
	Robin information = {
		"Robin",
		21,
		{"Long", "Beijing", "China"}
	};
	printf("%s, %d\n", information.name, information.age);
	printf("Address : %s-%s-%s", information.address.street, information.address.city, information.address.country);

	return 0;
}