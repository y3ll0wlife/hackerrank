#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int maxAND = 0, maxOR = 0, maxXOR = 0;
  
  for (int i = 1; i < n; i++) {
      for (int j=i+1; j<=n; j++) {
            if (((i&j) > maxAND) && ((i&j) < k)) {
                maxAND = i&j;
            }
            if (((i|j) > maxOR) && ((i|j) < k)) {
                maxOR = i|j;
            }
            if (((i^j) > maxXOR) && ((i^j) < k)) {
                maxXOR = i^j;
        }
    }
  }
  
    printf("%i\n%i\n%i\n", maxAND, maxOR, maxXOR);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
