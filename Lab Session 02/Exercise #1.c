#include <stdio.h>

int main() {
    int i=1,n,sum=0;
    printf("Enter the no of terms: \t");
    scanf("%d",&n);
    printf("The first %d odd numbers are: \n",n);
   for(i=1;i<=n;i++){
        printf("%d ",2*i-1);
        sum += 2*i-1;
    }
    printf("\nThe sum of fisrt %d odd numbers is %d",n,sum);

//    while(i<=n){
//        printf("%d ",2*i-1);
//        sum += 2*i-1;
//        i++;
//
//    }
//    printf("\nThe sum of fisrt %d odd numbers is %d",n,sum);
//
//    do{
//        printf("%d ",2*i-1);
//        sum += 2*i-1;
//        i++;
//    }
//    while(i<=n);
//    printf("\nThe sum of fisrt %d odd numbers is %d",n,sum);
    return 0;
}
