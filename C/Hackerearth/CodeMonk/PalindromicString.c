#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], rev[1000];
    gets(s);
    strcpy(rev, s);
    strrev(rev);

    if(strcmp(rev, s)==0){
        printf("Yes");
    }
    else
        printf("No");

    return 0;
}
