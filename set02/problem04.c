#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int input_array_size()
{
    int n;
    printf("input the array size:\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    int i;
    printf("enter the composite numbers of the array:\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[n]);
    }
    

}
int sum_composite_numbers(int n, int a[n])
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void output(int summ)
{
    printf("the sum of composite numbers is:\n",summ);
}
int main()
{
    int a[20],n,summ;
     n =input_array_size();
    input_array(n,a);
    summ=sum_composite_numbers(n,a);
    output(summ);

return 0;

}


