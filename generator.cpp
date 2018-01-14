#include <cstdio>

main() {
	for(int i = 0; i < 256; i++) {
		printf("%%F{%d}%d %%f", i, i);
	}
}
