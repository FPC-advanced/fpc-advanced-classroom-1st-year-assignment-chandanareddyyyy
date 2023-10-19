#include<stdio.h>

void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

void input(float *base, float *height)
{
    printf("Input the base of the triangle\n");
    scanf("%f",base);
    printf("Input the Height of the triangle\n");
    scanf("%f",height);

}
void find_area(float base, float height, float *area)
{
     *area=(0.5*(base*height));

}
void output(float base, float height, float area)
{
    printf("according to base %.1fand height %.1f the area of the triangle is %.1f",base,height,area);
}
int main()
{
    float base, height, area;
    input(&base, &height);
    find_area(base , height, &area);
    output( base,  height, area);
    return 0;

}
