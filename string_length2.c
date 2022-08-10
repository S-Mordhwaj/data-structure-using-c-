#include<stdio.h>
int str_len(const char*s)
{ 
    int i = 0;
    while(*(s+i) != '\0')
    i++;
    return i;
}
 int main()
{
    char s[100];
    printf("Enter a Word : \t");
    scanf("%s",&s);
    printf("The length of given string is %d",str_len(s));
    return 0;
}