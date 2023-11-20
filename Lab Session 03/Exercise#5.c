#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,cols,i,j;
    int mat1[2][3] = {{1,2,3},{4,5,6}};
    int mat2[2][3] = {{1,1,1},{2,2,2}};
    rows = sizeof(mat1)/sizeof(mat1[0]);  //finding the no of rows
    cols = sizeof(mat1[0])/sizeof(mat1[0][0]); //finding the no of columns
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            *(*(mat1 + i) + j) =*(*(mat1+i)+j) + *(*(mat2+i)+j); //storing the result in the first matrix
            printf("%d ",*(*(mat1 + i) + j));
        }
        printf("\n");
    }
    return 0;
}
