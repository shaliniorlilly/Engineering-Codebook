// Find the largest and smallest element in a 2-D array.
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
  int max= arr[0][0];
  int min= arr[0][0];
  for(int i=0; i<m; i++){
       for(int j=0; j<n; j++){
          if(arr[i][j]> max){
              max= arr[i][j];
          }
           if(arr[i][j]< min){
              min= arr[i][j];
          }
       }
   }
   printf("The maximum element of the array is: %d \n", max);
   printf("The minimum element of the array is: %d \n", min);
    return 0;
}
