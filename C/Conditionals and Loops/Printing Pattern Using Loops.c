#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int largestNum(int a, int b){
    if(a > b) return a;
    return b;
}

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int len = n * 2 - 1;
    
    for (int row = 1; row <= len;row++) {
        for (int col = 1; col <= len; col++) {
            printf("%i ", largestNum(abs(row-n), abs(col-n))+1);
        }
        printf("\n");
    }
      
    return 0;
}