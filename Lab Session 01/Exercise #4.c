#include <stdio.h>
void binary(n){
    if (n==1){
        printf("%d",n);
        return;
    }
    binary(n/2);
    printf("%d",n%2);
}

int main()
{
    int num;
    printf("Enter a no. to convert to binary: \t");
    scanf("%d",&num);
    binary(num);
    return 0;
}
