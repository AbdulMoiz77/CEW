#include <stdio.h>
#include <string.h>
int main() {
    int n,len1,len2,i;
    char str1[]="string";
    char str2[]="String";
    len1 = strlen(str1);
    len2 = strlen(str2);
   if(len1>len2){
        n = len2;
    }
    else{
        n = len1;
    }
    for(i=0;i<n;i++){
        if(str1[i]!=str2[i]){
            printf("%d",str1[i]-str2[i]);
            break;
        }
    }
    if(i==n){
        printf("%d",0);
    }
    return 0;
}
