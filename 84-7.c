#include <stdio.h>

#define m 4
#define ALL_DIFFERENT 0 + 1 + 5 + 11

int A[][m] = { {0, 1, 5, 11}
            , {11, 5, 0, 1}
            , {11, 1, 5, 0}
            , {0, 1, 5, 11}};

int main() {
  for (int i=0; i < m - 1; i++){
    for (int j=0; j < m - 1; j++) {
      if ( ALL_DIFFERENT == A[i][j] + A[i+1][j] + A[i][j+1] + A[i+1][j+1]) {
        printf("%d %d\n",i,j);
      }
    }
   }
 }
