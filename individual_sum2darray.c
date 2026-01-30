// Find the sum of each row and each column.
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
       for(int j=0; j<n; j++){
           sum+= arr[i][j];
       }
       printf("The sum of elements of %d row is: %d", i+1, sum);
       printf("\n");
       sum=0;
   }
   for(int j=0; j<n; j++){
       for(int i=0; i<m; i++){
           sum+= arr[i][j];
       }
        printf("The sum of elements of %d column is: %d", j+1, sum);
       printf("\n");
       sum=0;
   }
    return 0;
}
