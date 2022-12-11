/*write a program to print a string using pointer*/
#include<stdio.h>
int main()
{
    char str[100];
    char *p;
    printf("enter any string: \n");
    fgets(str, 100, stdin);
    p=str;
    printf("The input string is : ");
    while(*p != '\0')
    printf("%c",*p++);
    return 0;
}