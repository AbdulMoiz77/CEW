#include <string.h>
#include <stdio.h>
int main()
{
    char str[100];
    int n,i,a;
    printf("Enter a sentence: \n");
    scanf("%[^\n]s",&str);
    n = strlen(str);
    for(i=0;i<n;i++){
        a = str[i];
        if(a>='a' && a<='z'){
            str[i] = a-32;
        }
        else if (a>='A' && a<='Z'){
            str[i] = a+32;
        }
    }
    printf("%s",str);
    return 0;
}
