// Print matrix in row-wise and column-wise traversal..
#include <stdio.h>
int main() {
   int m,n,arr[100][100],sum=0;
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
   for(int i=0; i<m; i++){
       printf("The %d row is: ", i+1);
       for(int j=0; j<n; j++){
           printf("%d ",arr[i][j]);
       }
        printf("\n");
   }
   for(int j=0; j<n; j++){
       printf("The %d column is: ", j+1);
       for(int i=0; i<m; i++){
           printf("\n %d",arr[i][j]);
       }
       printf("\n");
   }
    return 0;
}
