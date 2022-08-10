#include<stdio.h>
char* strcpy(char*d, const char*s)
{
    char* d1 = d;
    for(; *s !='\0'; s++)
    *d1++ = *s;
    return d;
}

int main()
{ 
    char s1[200], s2[200];
    printf("Enter a string:\t");
    gets(s1);
    strcpy(s2, s1);
    printf("copied string: %s",s2);
    return 0;
}