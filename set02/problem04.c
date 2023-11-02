#include <stdio.h>

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

int sum_composite_numbers(int n, int a[n]) 
{
    int i,j,sum = 0;
    for (int i = 0; i < n; i++) 
    {
        for (i=2;i<=a[j]/2;i++) 
        {
            if(a[j]/i==0)
            sum=sum+a[i];
            break;
        }
        return 1;
    }
    return 0;
   
}

void output(int sum) 
{
    printf("The sum of composite numbers in the array is: %d\n", sum);
}

int main() 
{
    int sum;
    int n = input_array_size();
    int a[n];
    input_array(n, a);
    sum= sum_composite_numbers(n, a);
    output(sum);
    return 0;
}
