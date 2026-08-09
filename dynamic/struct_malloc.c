#include <stdio.h>
#include <stdlib.h>

typedef struct Charcter {
	char* name;
	int level;
	int hp;
}Charcter;

Charcter* create_charcter(const char* name, int level, int hp);

void check_name(Charcter* charcter);

void demo_struct_malloc()
{
	Charcter* hero = create_charcter("hero", 1, 1);
	if (hero == NULL) {
		return EXIT_FAILURE;
	}

	check_name(hero);

	return 0;
}
Charcter* create_charcter(const char* name, int level, int hp) {
	Charcter* new_name = (char*)malloc(sizeof(Charcter));

	if (new_name == NULL) {
		perror("Failed to malloc new name");
		exit(EXIT_FAILURE);
	}
	new_name->name = (char*)malloc(strlen(name) + 1);
	if (new_name->name == NULL) {
		free(new_name);
		perror("Failed to allcate a new name");
		exit(EXIT_FAILURE);
	}

	strcpy_s(new_name->name, strlen(name) + 1, name);
	new_name->hp;
	new_name->level;


	return new_name;
}
void check_name(Charcter* charcter) {
	if (charcter != NULL) {
		free(charcter->name);
		free(charcter);
	}
}