#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
int main()
{
    float x1,x2,y1,y2,dist;
    input(&x1,&y1,&x2,&y2);
     dist=find_distance(x1,y1,x2,y2);
     output(x1,y1,x2,y2,dist);
     return 0;
}
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter co-ordinates of first point:  ");
     scanf("%f%f",x1,y1);
     printf("Enter co-ordinates of second point: ");
     scanf("%f%f",x2,y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
     float dist=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return dist;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
     printf("The distance between point (%f,%f) and (%f,%f) is %f\n",x2,y2,x1,y1,distance);
}
    