#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
    int n,result;
    n=input_number();
    int composite=is_composite(n);
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
if(n<=0)
{
    result=0;
}
for(int i=2;i<n;i++)
{ if(n%i==0)
{
    result=1;
}
else{
    result=0;
}
}

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


