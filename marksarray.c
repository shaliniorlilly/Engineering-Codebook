// Online C compiler to run C program online
#include <stdio.h>
int main() {
 int arr[6];
 printf("Enter the marks of your subject: \n ");
 printf("COMMUNICATION SKILLS: \n");
 scanf("%d", &arr[0]);
 printf("ADVANCED CALCULUS:\n");
 scanf("%d", &arr[1]);
 printf("ENGINEERING VISUALIZATION: \n");
 scanf("%d", &arr[2]);
 printf("INTRODUCTION TO COMPUTER SYSTEMS: \n");
 scanf("%d", &arr[3]);
 printf("HOLISTIC HEALTH & SPORTS: \n");
 scanf("%d", &arr[4]);
 printf("PROBLEM SOLVING & COMPUTER PROGRAMMING:\n");
 scanf("%d", &arr[5]); 
int min=arr[0], max=arr[0];
for(int i=0; i<6;i++){
    if(arr[i]>max){
        max= arr[i];
    }
    if(arr[i]<min){
        min= arr[i];
    }
}
printf("the max is %d and min is %d", max,min);
    return 0;
}
