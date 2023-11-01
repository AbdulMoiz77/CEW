#include <stdio.h>
#include <stdlib.h>

void fibonacci(n,a,b){
    int c;
    if (n==0){
        return;
    }
    c = a+b;
    if (n!=1){
        printf("%d , ",c);
    }
    else{
        printf("%d",c);
    }
    fibonacci(n-1,b,c);
}
int main()
{
    int n;
    printf("Enter the number of terms: \t");
    scanf("%d",&n);
    printf("Fibonacci Series: \n");
    printf("%d , %d , ",0,1); //The first two terms of Fibonacci series are fixed therefore printing it
    fibonacci(n-2,0,1);
    return 0;
}
