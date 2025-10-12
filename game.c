
#include "game.h"

int count_alive(int field[HEIGHT][WIDTH], int x, int y){

	int count = 0;
	for(int i = -1; i <=1; i++){
		for (int j = -1; j <=1; j++){
			if (i == 0 && j == 0) continue;
			int nx = x + i;
			int ny = y +j;
			if (nx >= 0 && nx < HEIGHT && ny >= 0 && ny < WIDTH)
				count += field[nx][ny];
		}
	}
	return count;
}

void evolve(int field[HEIGHT][WIDTH], int new_field[HEIGHT][WIDTH]){
	for (int i = 0; i < HEIGHT; i++){
		for (int j = 0; j< WIDTH; j++){
			int alive = count_alive(field, i, j);
			if(field[i][j] == 1){
				new_field[i][j] = (alive == 2 || alive == 3) ? 1 : 0;
			} else{
				new_field[i][j] = (alive == 3) ? 1 : 0;
			}
		}
	}
}
