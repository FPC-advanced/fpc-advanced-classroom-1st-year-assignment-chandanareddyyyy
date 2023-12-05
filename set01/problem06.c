#include <stdio.h>

int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main() 
{
    int num1, num2, num3, largest;

    int a=input(); 
    int b=input();
      int c=input();
    
    compare(num1, num2, num3, &largest);

    output(num1, num2, num3, largest); 

    return 0;
}

    int input() 
{
    int x;
    printf("Enter the first number: ");
    scanf("%d",x);
    
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

 