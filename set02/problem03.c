#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
    int n,result;
    n=input_number();  // n is taken input
    result=is_composite(n); // 0 or 1 value of composite is taken 
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

if(n<=1) 
{
 
    return 0;
}
for(int i=2;i<n;i++) 
{ 
    if(n%i==0)
{
    
    return 1;
}

}
    return 0;
}



void output(int n, int result)
{

    if(result==1)
    {
        printf("the number %d is composite",n);
    }
    else if(result==0)
    {
        printf("the number %d is not composite",n);
    }
}


