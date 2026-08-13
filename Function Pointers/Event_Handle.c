#include <stdio.h>
#include <string.h>

typedef enum {
	PLAYER_ATTACK,
	PLAYER_MOVE,
	EVENT_COUNT
}EVENT_TYPE;

typedef void (*event_handle)(const char*);

event_handle event_handles[EVENT_COUNT];

void register_event_handle(EVENT_TYPE type_event, event_handle handler);

void event_pathe(EVENT_TYPE type_event, const char* name);

void player_attack(const char* name);

void player_move(const char* name);

int main()
{
	register_event_handle(PLAYER_ATTACK, player_attack);
	register_event_handle(PLAYER_MOVE, player_move);

	event_pathe(PLAYER_ATTACK, "Robin");
	event_pathe(PLAYER_MOVE, "Robin");

	return 0;
}
void register_event_handle(EVENT_TYPE type_event, event_handle handler) {
	if (type_event < EVENT_COUNT) {
		event_handles[type_event] = handler;
	}
}
void event_pathe(EVENT_TYPE type_event, const char* name) {
	if (event_handles[type_event] != NULL) {
		event_handles[type_event](name);
	}
}
void player_attack(const char* name) {
	printf("%s attack!\n", name);
}
void player_move(const char* name) {
	printf("%s move!\n", name);
}
