#include <cstdio>

int main() {
	short row, col;
	scanf("%hd %hd", &row, &col);
	unsigned short yard[row][col];

	// reading 2d array
	for(short i = 0; i < row; i++) {
		for(short j = 0; j < col; j++) {
			scanf("%hu", &yard[i][j]);
		}
	}

	// adding numbers in 1st row
	for(short c = 1; c < col; c++) {
		yard[0][c] += yard[0][c-1];
	}

	// adding numbers in 1st column
	for(short r = 1; r < row; r++) {
		yard[r][0] += yard[r-1][0];
	}

	// adding numbers in all other places
	for(short r = 1; r < row; r++) {
		for(short c = 1; c < col; c++) {
			yard[r][c] += ((yard[r-1][c] > yard[r][c-1]) ? yard[r-1][c] : yard[r][c-1]);
		}
	}

	printf("%hu\n", yard[row-1][col-1]);

	return 0;
}
