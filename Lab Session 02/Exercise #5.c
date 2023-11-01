#include <stdio.h>
int main()
{
    int array[]={0,3,2,5,4,3,2,3,7},i,count=0,j,temp;
    for(i=0;i<9;i++){
    temp = 0;
        for(j=0;j<9;j++){
            if (array[i]==array[j]){
                temp++ ;
            }
        }
        if(temp==1){
            count++ ;
        }
    }
    printf("The no of unique elements are %d",count);
    return 0;
}
