#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int n,i;
    printf("Enter a string:\t");
    scanf("%[^\n]s",string);
    n = strlen(string);
    for(i=0;i<=n;i++){
        printf("%c",*(string+i));
    }
    return 0;
}
