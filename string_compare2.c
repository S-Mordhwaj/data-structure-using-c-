#include<stdio.h>
int str_cmp(char *s1, char *s2)
{
    for(; *s1 != '\0' &&  *s2 != '\0'; s1++,s2++)
    {
        if(*s1 > *s2)
        return 1;
        if(*s2 > *s1)
        return -1;
    }
    if(*s1 != '\0')
    return 1;
    if(*s2 != '\0')
    return -1;
    return 0;

}

int main()
{
    char s1[100], s2[100];
    printf("Enter a first string:\n");
    scanf("%s",s1);
    printf("Enter a second string:\n");
    scanf("%s",s2);
    printf("After comparision of two string is %d",str_cmp(s1,s2));
    return 0;
}