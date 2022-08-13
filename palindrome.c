#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("Enter string:\n");
    scanf("%s",s);
    int n = strlen(s);
    int i;
    for(i=0; i<n/2; i++){
        if (s[i] == s[n-i-1])
        continue;
        else
        break;
    }
    if(i==n/2)
    printf("Palindrome:");
    else 
    printf("Not a palindrome:");
    return 0;
}