#include <stdio.h>

void input_string(char *x);
void str_reverse(char *str);
void output(char *x);

int main()
{
    char x[100];
    input_string(x);
    str_reverse(x);
    output(x);
    return 0;
}

void input_string(char *x)
{
     printf("enter a string");
    scanf("%s",x);
}

void str_reverse(char *str)
{
    int len;
    char rev[100];
    for(len=0;str[len]!='\0';len++);
    for(int i=0;i<len;i++)
    {
        rev[i]=str[i];
    }
    for(int i=0;i<len;i++)
    {
        str[i]=rev[(len-1)-i];
    }
}

void output(char *x)
{
    printf("reverse of  string is: %s",x);
}