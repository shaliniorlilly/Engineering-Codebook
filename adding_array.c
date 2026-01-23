#include <stdio.h>
int main() {
   int arr1[100], arr2[100],arr3[200],size;
   printf("WELCOME TO THE PROGRAM FOR ADDING TWO ARRAYS \n");
   printf("Enter the size of both arrays: ");
   scanf("%d", &size);
   printf("ENTER THE ELEMENTS OF ARRAY 1:\n");
   for(int i=0; i<size; i++){
       scanf("%d", &arr1[i]);
   }
    printf("ENTER THE ELEMENTS OF ARRAY 2:\n");
   for(int i=0; i<size; i++){
       scanf("%d", &arr2[i]);
   }
   printf("NOW ADDING ARRAY... \n");
   for(int i=0; i<size; i++){
   arr3[i]= arr1[i]+ arr2[i];
   }
printf("DISPLAYING ADDED ARRAY: \n");
for(int i=0; i<size; i++){
    printf("%d ", arr3[i]);
}
    return 0;
}
