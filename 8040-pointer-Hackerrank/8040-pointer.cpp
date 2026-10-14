#include <stdio.h>

void update(int *a, int *b) 
{
    int sum = *a + *b;
    int abs_diff = (*a > *b) ? (*a - *b) : (*b - *a);
    
    *a = sum;
    *b = abs_diff;
}

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna