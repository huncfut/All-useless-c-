#include <cstdio>
#include <vector>

int main() {
  int n, size, max = 0; scanf("%d", &n);
  std::vector<std::vector<bool> > pan;
  std::vector<bool> v;

  for(size_t i = 0; i < n; i++) {
    scanf("%d", &size);
    max = size > max ? size : max;
    v.clear();
    for(size_t j = 0; j < size; j++) {
      v.push_back(1);
    }
    pan.push_back(v);
  }

  for(size_t i = max; i > 0;) {
    for(size_t j = 0; j < n; j++) {
      if(pan[j].size() >= i) {
        printf("X");
      } else {
        printf(" ");
      }
    }
    printf("\n");
    i--;
  }

  return 0;
}
