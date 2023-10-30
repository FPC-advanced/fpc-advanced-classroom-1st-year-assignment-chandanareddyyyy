#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
    int n,result;
    n=input_number();  // n is taken input
    int composite=is_composite(n); // 0 or 1 value of composite is taken 
    output(n,result);
    return 0;
    
}
int input_number()
{ int n;
    printf("Enter the number");
    scanf("%d",&n);
    return n;
}
int is_composite(int n)
{
    int result;
if(n<=1) // checking if n is 0 or 1 to eliminate it.
{
    result=0; //take result as 0 if n is 0  or 1
}
for(int i=2;i<n;i++) // start a for loop to start checking from 2 (as 1 and 0 are eliminated)start from 2 and finish at n.
{ 
    if(n%i==0)
{
    result=1;
}
else{
    result=0;
}
}
return result;
}
void output(int n, int result)
{

    if(result=1)
    {
        printf("the number %d is composite",n);
    }
    else if(result=0)
    {
        printf("the number %d is not composite",n);
    }
}


