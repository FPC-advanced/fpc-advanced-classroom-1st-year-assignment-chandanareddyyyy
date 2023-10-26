#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
    int n;
    n=input_number();
    int composite=is_composite(n);
    
    
}
int input_number()
{
    printf("Enter the number");
    scanf("%d",&n);
    return n;
}
int is_composite(int n)
{
if(n<=0)
{
    composite=0;
}
else if(n%2==0)
{
    composite=1;
}
else{
    composite=0;
}
}
void output(int n, int result)
{
    if(composite=1)
    {
        printf("the number %d is composite",n);
    }
    if(composite=0)
    {
        printf("the number %d is not composite",n);
    }
}


