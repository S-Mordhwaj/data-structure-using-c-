#include<stdio.h>
int main()
{
   char s1[1000];
   char s2[1000];
    int i,j;

    printf("Enter first string:\n");
    scanf("%s",s1);
    printf("Enter second string:\t");
    scanf("%s",s2);
    for(i=0; s1[i] != '\0'; i++){}

    for(j=0; s1[j] != '\0'; j++,i++)
    s1[i] = s2[j];
    s1[i] = '\0';
    printf("Concatinated string: %s",s1);
    return 0;
}