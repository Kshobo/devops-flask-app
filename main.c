#include <stdio.h>
#include "game.h"

void dump_field(int field[HEIGHT][WIDTH]){
	for(int i = 0; i < HEIGHT; i++){
		for (int j = 0; j < WIDTH; j++){
			printf("%c", field[i][j] ? 'o' : '.');
		}
		printf("\n");
	}
	printf("\n");
}

int main(){
	int field[HEIGHT][WIDTH] = {0};
	int new_field[HEIGHT][WIDTH] = {0};

	field[4][4] = 1;
	field[4][5] = 1;
	field[4][6] = 1;

	printf("Initial field:\n");
	dump_field(field);

	evolve(field, new_field);
	printf("Next generation:\n");
	dump_field(new_field);

	return 0;
}
