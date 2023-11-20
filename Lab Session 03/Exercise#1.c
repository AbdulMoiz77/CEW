#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
int main()
{
    int a=2,b=5;
    printf("Before Swapping a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("After Swapping a=%d and b=%d",a,b);
    return 0;
}
