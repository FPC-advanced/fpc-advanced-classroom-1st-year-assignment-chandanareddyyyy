#include <stdio.h>
#include <math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
int main()
{
     float x1,x2,x3,y1,y2,y3;
     int r;
     input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
     r=is_triangle(x1,y1,x2,y2,x3,y3);
      output(x1,y1,x2,y2,x3,y3,r);
      return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter co-ordinates of first point :\n");
    scanf("%f%f",x1,y1);
    printf("Enter co-ordinates of second point:\n");
    scanf("%f%f",x2,y2);
    printf("Enter co-ordinates of third point :\n");
    scanf("%f%f",x3,y3);
}
