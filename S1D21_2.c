#include <stdio.h>
int main()
{
    char string1[100], string2[100];
    printf("Enter the first string:\n");
    gets(string1);
    printf("Enter the second string to be concatenated:\n");
    gets(string2);

    char *s1 = string1;
    char *s2 = string2;

    while(*s1!='\0')
    {
        s1++;
    }
    
    while(*s2!='\0')
    {
        *s1 = *s2;
        s2++;
        s1++;
    }
    *s1 = '\0';
    
    printf("\nThe string after concatenation is:\n%s",string1);
    
    return 0;
}
