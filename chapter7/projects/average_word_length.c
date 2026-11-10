#include <stdio.h>

int main () {
	float char_counter = 0;
	float word_length = 0;
	float word_counter = 0;
	char c;
	
	printf("Enter a sentence: ");
	c = getchar();

	while(c != '\n') {
		if (c != 32) {
			char_counter++;
		}
		else {
			word_length += char_counter;
			word_counter++;
			char_counter = 0;
		}
		c = getchar();

	}
	word_length += char_counter;
	word_counter++;
	word_length /= word_counter;
	
	printf("Average word length: %.1f\n", word_length);

return 0;

}
