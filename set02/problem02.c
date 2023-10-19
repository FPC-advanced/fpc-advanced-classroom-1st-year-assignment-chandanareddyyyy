#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int input_side()
{
    int x;
    printf("Input the side of the triangle\n ");
    scanf("%d",&x);
    return x;

}
int check_scalene(int a, int b, int c)
{
   if(a==b||a==c||b==c)
   {
    return 0;
   } 
   else
   {
    return 1;
   }
}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene==0)
    {
printf("the triangle of sides %d, %d and %d is %s",a,b,c,"not scalene");
    }
 else 
 if (isscalene==1)
 {
    printf("the triangle of sides %d, %d and %d is %s",a,b,c,"scalene");
 }



}
int main()
{
    int a,b,c;
    a=input_side();
    b=input_side();
    c=input_side();
    int isscalene = check_scalene(a,b,c);
    output(a,b, c,isscalene);
     
    return 0;
}

