#include<stdio.h>
int main(){
  int arr[100],size,choice,n,insert,position;
  printf("WELCOME TO THE PROGRAM TO APPLY DIFFERENT OPERATIONS ON AN ARRAY \n");
  printf("           !!!!LET US CREATE AN ARRAY!!!! \n");
  printf("Enter the size of array: ");
  scanf("%d", &size);
  printf("Enter different elements of array: \n");
  for(int i=0; i<size; i++){
  scanf("%d", &arr[i]);
  } 
  printf("---------MENU----------- \n");
  printf(" 1.INSERTION \n 2.DELETION \n 3.TRAVERSAL \n 4.EXIT \n");
  do{
  printf("ENTER THE CHOICE FOR OPERATION TO BE DONE ON ARRAY: ");
  scanf("%d", &choice);
    switch(choice){
      case 1: printf("Enter the element to be inserted into the array: ");
scanf("%d", &insert);
printf("Enter the postion of element: ");
scanf("%d", &position);
for(int i=size; i>=position; i--){
arr[i]= arr[i-1];
}
arr[position-1]= insert;
printf("THE NEW ARRAY IS: \n");
for(int i=0; i<size+1; i++){
printf("%d ", arr[i]); 
}
printf("\n");
break;
      case 2: printf("Enter the position to be deleted: \n");
scanf("%d", &position);
for(int i=position; i<size; i++){
    arr[i-1]= arr[i];
}
size--;
printf("THE NEW ARRAY IS: \n");
for(int i=0; i<size; i++){
    printf("%d ", arr[i]);
}
printf("\n");
break; 
      case 3: printf("The Array has been ceated as: \n");
  for(int i=0; i<size; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
  break;
      default: ("INVALID OPTION!");
      printf("\n");
    }
  }while(choice!=4);
  printf("         !!!!!Successfully Exited!!!!");
  return 0;
}
