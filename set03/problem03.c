#include <stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);
int main()
{
    int x,r;
    x=input_number();
    r=is_prime(x);
    output(x,r);
    return 0;
}
int input_number()
{
    int x;
    scanf("%d",&x);
    return x;
}
int is_prime(int n)
{
    if(n>1 && n<=3)
    {
        return 1;

}