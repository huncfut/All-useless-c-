#include <cstdio>

int main() {
	int row, col;
	scanf("%d %d", &row, &col);
	short yard[row][col];

	// reading table
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			scanf("%hd", &yard[i][j]);
		}
	}

	// adding numbers in 1st row
	for(int c = 1; c < col; c++) {
		yard[0][c] += yard[0][c-1];
	}

	// adding numbers in 1st column
	for(int r = 0; r < row; r++) {
		yard[r][0] += yard[r-1][0];
	}

	// adding numbers in all other places
	for(int r = 1; r < row; r++) {
		for(int c = 1; c < col; c++) {
			yard[r][c] += ((yard[r-1][c] > yard[r][c-1]) ? yard[r-1][c] : yard[r][c-1]);
		}
	}

	printf("%hd\n", yard[row-1][col-1]);

	return 0;
}
