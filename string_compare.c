#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100], s2[200];
    printf("Enter a first string:\n");
    scanf("%s",s1);
    printf("Enter a second string:\n");
    scanf("%s",s2);
    printf("Comparision of two string %d ", strcmp(s1,s2));
    return 0;
}