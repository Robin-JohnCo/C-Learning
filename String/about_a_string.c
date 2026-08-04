#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TEXT_SIZE 100
#define WORD_SIZE 50
#define DELIMS " ,.!?\n"

void replaceWord(const char* text, const char* oldWord, const char* newWord, char* result);

int Charcount(const char* text, char ch);

int main() {

	char string[TEXT_SIZE] = "This is a sample test. This text is for testing.";

	char replacedText[TEXT_SIZE] = { 0 };

	char oldWord[] = "test";

	char newWord[] = "example";

	char countCharTarget = 's';

	char uniqueWords[TEXT_SIZE][WORD_SIZE] = { 0 };
	 
	int uniqueCount = 0;

	replaceWord(string, oldWord, newWord, replacedText);
	printf("Replaced Text : %s\n", replacedText);

	int countChar = Charcount(replacedText, countCharTarget);
	printf("Char %c appperas %d times.\n", countCharTarget, countChar);



	return 0;
}
void replaceWord(const char* text, const char* oldWord, const char* newWord, char* result) {
	char butter[TEXT_SIZE] = { 0 };
	const char* pos = text;
	const char* temp = text;
	size_t oldWordLen = strlen(oldWord);

	while ((temp = strstr(pos, oldWord)) != NULL) {
		strncat_s(butter, sizeof(butter), pos, temp - pos);
		strcat_s(butter, sizeof(butter), newWord);
		pos = temp + oldWordLen;
	}
	strcat_s(butter, sizeof(butter), pos);
	strcpy_s(result, TEXT_SIZE, butter);
}
int Charcount(const char* text, char ch) {
	int count = 0;
	while (*text){
		if (*text == ch) {
			count++;
		}
		text++;
	}
	return count;
}