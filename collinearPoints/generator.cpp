#include <cstdio>
#include <cstdlib>
#include <ctime>

int main() {
	printf("100\n");
	int x, y;
	srand(time(NULL));
	for(short i = 0; i < 100; i++) {
		x = rand() % 21 - 10;
		y = rand() % 21 - 10;
		printf("%d %d\n", x, y);
	}
}
