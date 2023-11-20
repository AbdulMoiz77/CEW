#include <stdio.h>
#include <stdlib.h>

int search(int *array,int size, int target){
    int i;
    for(i=0;i<=size;i++){
        if (*(array+i)==target){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[6]={1,2,5,4,3,8},n;
    n = sizeof(arr)/sizeof(arr[0]);
    printf("%d",search(arr,n,4));
    return 0;
}
