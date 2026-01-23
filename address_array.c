#include <stdio.h>

int main() {
    float arr[10],size;
    printf("Enter the size of array: ");
    scanf("%f",&size);
    printf("ENTER THE ELEMENTS OF ARRAY: \n");
    for(int i=0; i<size; i++){
        scanf("%f", &arr[i]);
    }
    printf("PRINTING ARRAY \n");
    for(int i=0; i<size; i++){
        printf("%f ", arr[i]);
    }
    printf("\n");
    printf("PRINTING THE ADDRESS: \n");
    for(int i=0; i<size; i++){
        printf("THE ADDRESS OF INDEX: %d ELEMENT: %f is: %p \n", i,arr[i],&arr[i]);
    }

    return 0;
}
