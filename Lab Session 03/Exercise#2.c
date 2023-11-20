#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "this is a palindrome madam";
    int n,i;
    n = strlen(str);
    for(i=n-1;i>=0;i--){
        printf("%c",*(str+i));
    }
    return 0;
}
