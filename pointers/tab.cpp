#include <cstdio>

int main(int argc, char const *argv[]) {
  int tab[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
  int *wtab;
  wtab = tab;

  printf("%d \n", *(wtab+3));
  printf("%d \n", *wtab+3);
  printf("%d \n", *wtab++);
  printf("%d \n", *++wtab);
  printf("%d \n", ++*wtab);

  return 0;
}
