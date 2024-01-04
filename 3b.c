#include<stdio.h>
void main()
{
    char a;
    printf("enter any character ");
    scanf("%c",&a);
    if (a=='a'|| a=='u'|| a=='o'|| a=='e'|| a=='i')
    {
        printf ("it is vowel");
    }
    else
    {
        printf("it is a consonent");
    }
}