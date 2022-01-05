#include <stdio.h>

#define N 7
#define M 9

static int A[N] = {1, 4, 6, 8, 10, 12, 14};
static int B[M] = {2, 3, 5, 7, 9, 11, 13, 15, 17};
int C[M+N];
int i,j = 0;
short A_go = 1;
short B_go = 1;

int main() {

  while ( (i < N) || (j < M) ) {
    if ( A_go && (A[i] <= B[j]) ) {
      printf ("%d %d %d\n", i, j, A[i]);
      C[i+j] = A[i];
      if ( N-1 == i ) A_go = 0;
      i++;
    } else if (B_go) {
      printf ("%d %d %d\n", i, j, B[j]);
      C[i+j] = B[j];
      if ( M-1 == j ) B_go = 0;
      j++;
    }
  }

  for (int i=0; i<N+M; i++) {
    printf ("%d ", C[i]);
  }
  printf ("\n");
}
