#include <stdio.h>

int main() {
  int n,key,found=0;
  int arr[]={18,4,5,3,12,9,4,1};
   printf("Enter the element to be searched:");
  scanf("%d", &key);
    for(int i=0; i<8; i++){
          if(arr[i]==key){
             printf("key found at position %d \n", i+1);
             found=1;
             break;
          }
}
if(found==0){
    printf("key not found!");
}
    return 0;
}
