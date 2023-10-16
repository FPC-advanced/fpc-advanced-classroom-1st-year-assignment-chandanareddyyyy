#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n], int sum);

int main() 
{
    int n, sum;

    n = input_array_size(); 
    int array[n]; 

    input_array(n, array);
    sum = sum_n_array(n, array); 

    output(n, array, sum); 

    return 0;
}

int input_array_size() 
{
    int n;
    printf("Enter the number of different numbers: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) 
{
    printf("Enter the %d different numbers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
}

int sum_n_array(int n, int a[n]) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += a[i];
    }
    return sum;
}

void output(int n, int a[n], int sum) 
{
    printf("The sum of %d different numbers is: %d\n", n, sum);
}
