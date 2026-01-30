// Find the sum of all elements of a 2-D array.
#include <stdio.h>
int main(){
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
   }
   printf("THE SUM IS: %d", sum);
    return 0;
}
