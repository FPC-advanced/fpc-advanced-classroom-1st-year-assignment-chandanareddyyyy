#include <stdio.h>

int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main() 
{
    int num1, num2, num3, largest;

    int a=input(&num1, &num2, &num3); 
    int b=input(&num1, &num2, &num3);
      int c=input(&num1, &num2, &num3);
    
    compare(num1, num2, num3, &largest);

    output(num1, num2, num3, largest); 

    return 0;
}

int input(int *a, int *b, int *c) 
{
    printf("Enter the first number: ");
    scanf("%d",a);
    printf("Enter the second number: ");
    scanf("%d",b);
    printf("Enter the third number: ");
    scanf("%d", c);
}

void compare(int a, int b, int c, int *largest) 
{ 
    largest=a;
    if (b>=largest) 
    {
        *largest = b;
    } 
    if (c>=largest)
    {
        *largest = c;
    }
    
}

void output(int a, int b, int c, int largest) 
{
    printf("The largest number among %d, %d, and %d is: %d\n", a, b, c, largest);
}

 