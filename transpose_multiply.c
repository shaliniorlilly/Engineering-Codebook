// Find the transpose and then multiply with original matrix.
#include <stdio.h>
int main() {
   int m,n,arr[100][100],arr2[100][100], arr3[100][100];
   printf("Enter the number of rows: ");
   scanf("%d", &m);
    printf("Enter the number of columns: ");
   scanf("%d", &n);
   printf("Enter elements of the array: \n");
   for(int i=0; i<m; i++){
       for(int j=0; j<n; j++){
           scanf("%d", &arr[i][j]);
       }
       printf("\n");
   }
   printf("THE ELEMENTS OF THE 2D ARRAY ARE: \n");
   for(int i=0; i<m; i++){
       for(int j=0; j<n; j++){
           printf("%d ",arr[i][j]);
       }
        printf("\n");
   }
   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
           arr2[i][j]= arr[j][i];
       }
        printf("\n");
   }
   printf("THE ELEMENTS OF THE TRANPOSED 2D ARRAY ARE: \n");
   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
           printf("%d ",arr2[i][j]);
       }
        printf("\n");
   }
   for(int i=0; i<m; i++){
       for(int j=0; j<m; j++){
               arr3[i][j]=0;
           }
       }
    for(int i=0; i<m; i++){
       for(int j=0; j<m; j++){
           for(int k=0; k<n; k++){
               arr3[i][j]+= arr[i][k]*arr2[k][j];
           }
           }
    }
        printf("\n");
   
   printf("THE MULTIPLIED ARRAY IS: \n");
   for(int i=0; i<m; i++){
       for(int j=0; j<m; j++){
              printf("%d ", arr3[i][j]);
       }
        printf("\n");
   }
    return 0;
}
