#include <stdio.h>
#include <stdbool.h>

#define N 8

void addone () {
}

int main () {
  int M[N+1] = {0, 1, 0, 1, 1, 1, 0, 1, 0};

  bool still_adding = true;

  for (int i=N-1;i>=0;i--) {
    if (still_adding) {
      if (1 == M[i]) {
	M[i] = 0;
      } else {
	still_adding = false;
	M[i] = 1;
      }
    }
  }
  return 0;
}
