#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.

    for (int i=a; i <= b; i++) {
        char text[100];
        if(i >= 1 && i <= 9){
            if(i == 1) strcpy(text, "one\n");
            else if(i == 2) strcpy(text, "two\n");
            else if(i == 3) strcpy(text, "three\n");
            else if(i == 4) strcpy(text, "four\n");
            else if(i == 5) strcpy(text, "five\n");
            else if(i == 6) strcpy(text, "six\n");
            else if(i == 7) strcpy(text, "seven\n");
            else if(i == 8) strcpy(text, "eight\n");
            else if(i == 9) strcpy(text, "nine\n");
        }
        else if(i > 9 && i%2 == 0) strcpy(text, "even\n");
        else strcpy(text, "odd\n");
        
        printf("%s", text);
    }
    return 0;
}

