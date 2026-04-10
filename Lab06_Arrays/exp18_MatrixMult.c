#include <stdio.h>
int main(){
    int size=3;
    int arr1[3][3],arr2[3][3],c[3][3];
    int row,col,k;
    printf("Enter elements of the matrix 1: \n");
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Enter the elements for matrix 2 :\n");
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&arr2[row][col]);
        }
    }
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            c[row][col]=0;
            for(k=0;k<size;k++){
                c[row][col]+=arr1[row][k]*arr2[k][col];
            }
        }
    }
    printf("The multiplication of the two matrixes is :\n");
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            printf("%4d",c[row][col]);
        }
        printf("\n");
    }
}
