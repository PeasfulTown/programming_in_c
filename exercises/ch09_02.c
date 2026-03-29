// 2.  Why could you have replaced the  while statement of the  equalStrings() function of 
//  Program  9.4 with the statement 
//  while ( s1[i] == s2[i]  &&  s1[i] != '\0' ) 
//  to achieve the same results? 
//  Answer = the loop continues as long as s1 and s2 still equals each other,
//  and if s1 hasn't met the character string terminal character, we don't need
//  to check the same thing for s2 because if s1 hasn't met a character string
//  terminal character and s2 did, then s1[i] != s2[i] and loop terminates
#include <stdio.h>
#include <stdbool.h>

bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool areEqual;

    while (s1[i] == s2[i]
            && s1[i] != '\0' && s2[i] != '\0')
        ++i;

    if (s1[i] == '\0' && s2[i] == '\0')
        areEqual = true;
    else
        areEqual = false;

    return areEqual;
}

int main(void)
{
    bool equalStrings(const char s1[], const char s2[]);
    const char stra[] = "string compare test";
    const char strb[] = "string";

    printf("%i\n", equalStrings(stra, strb));
    printf("%i\n", equalStrings(stra, stra));
    printf("%i\n", equalStrings(strb, "string"));

    return 0;
}

