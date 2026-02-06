// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int arr[100],n,temp;
 printf("Enter the size of array (lesser than 100): ");
 scanf("%d", &n);
 printf("Enter the elements of the array: \n ");
 for(int i=0; i<n;i++){
     scanf("%d", &arr[i]);
 }
 //BUBBLE SORTING THE ARRAY
 for(int i=0; i<n-1; i++){
     for(int j=0; j<n-i-1;j++){
         if(arr[j]>arr[j+1]){
         temp=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]= temp;}
     }
 }
 int high=n-1, low=0,mid;
 while(low<=high){
    mid=(high+low)/2;
     if(arr[mid]== mid+1){
       low=mid+1 ; 
     }
     else{
         high=mid-1;
     }
 }
 printf("the minimum value entered in the array is %d", low+1);
    return 0;
}
