#include <stdio.h>

typedef union {
	int int_value;
	float float_value;
	char* char_value;
}Data;
typedef enum {
	INT,
	FLOAT,
	CHAR
}DataType;
typedef struct{
	Data data;
DataType type;

}TypeData;
void print_type(TypeData* type_data);

void demo_Union()
{
	TypeData data1 = { {.int_value = 10}, INT };

	TypeData data2 = { {.float_value = 10.00}, FLOAT };

	TypeData data3 = { {.char_value = "Robin"}, CHAR };

	print_type(&data1);
	print_type(&data2);
	print_type(&data3);

	return 0;
}
void print_type(TypeData* type_data) {
	switch (type_data -> type) {
	case INT:
		printf("%d\n", type_data->data.int_value);break;
	case FLOAT:
		printf("%.2f\n", type_data->data.float_value);break;
	case CHAR:
		printf("%s\n", type_data->data.char_value);break;

	}
}