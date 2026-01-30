// Write a program to read and print a 2-D array.
#include <stdio.h>

int main() {
   int m,n,arr[100][100];
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

    return 0;
}
