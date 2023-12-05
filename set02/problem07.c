#include <stdio.h>

typedef struct _triangle {
	float altitude, base, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *T);
void output(Triangle T);

int main()
{
    Triangle T;
    T=input_triangle();
    find_area(&T);
    output(T);
    return 0;
}

Triangle input_triangle()
{
    Triangle T;
    scanf("%f%f",&t.base,&t.altitude);
    return t;
}

void find_area(Triangle *t)
{
    t->area=(t->base*t->altitude)/2;
}

void output(Triangle t)
{
    printf("The area of triangle wwith base = %f and altitude = %f is %f",t.base,t.altitude,t.area);
}