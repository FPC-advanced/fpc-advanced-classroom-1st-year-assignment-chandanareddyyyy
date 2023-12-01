#include <stdio.h>
#include <math.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);

int main() {
    float number, sqrroot;

    number = input();
    sqrroot = square_root(number); 

    output(number, sqrroot); 

    return 0;
}

float input() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    return n;
}

float square_root(float n) {
    float x = n; 
    float y = 1.0;
    while (fabs(x - y) > 0.00001) {
        x = (x + y) / 2.0;
        y = n / x;
    }

    return x;
}

void output(float n, float sqrroot) {
    printf("The square root of %.2f is approximately %.5f\n", n, sqrroot);
}
