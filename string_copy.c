#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter a string:\t");
    char s1[100], s2[100];
    scanf("%s",s1);
    strcpy(s2,s1);
    printf("copied string: %s",s2);
    return 0;
}