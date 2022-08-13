#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter a string:\n");
    scanf("%s",s);
    strrev(s);
    printf("Reverse string is : %s", s);
    return 0;
    
}
