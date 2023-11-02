#include <stdio.h>
#include <stdbool.h>

int input_array_size() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    return size;
}

void input_array(int n, int a[n]) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

bool is_composite(int num) 
{
    if (num <= 1) {
        return 0;
    }
    if (num <= 3) {
        return 0;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 1;
    }
    for (int i = 2; i<= num; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    return 0;
}

int sum_composite_numbers(int n, int a[n]) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum=sum+a[i];
        }
    }
    return sum;
}

void output(int sum) 
{
    printf("The sum of composite numbers in the array is: %d\n", sum);
}

int main() 
{
    int n = input_array_size();
    int a[n];
    input_array(n, a);

    int compositeSum = sum_composite_numbers(n, a);
    output(compositeSum);

    return 0;
}
