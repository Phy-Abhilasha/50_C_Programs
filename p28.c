#include <stdio.h>

int main() {
    int i, j = 1;
    
    // Loop for even indices
    for (i = 1; i <= 10; i++) 
    {
        if (i % 2 == 0) 
	{
            printf("%d\n", i * 2);
        }
       	else 
	{
            printf("%d\n", j * 2);
            j++;
        }
    }

    return 0;
}

