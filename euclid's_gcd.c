#include <stdio.h>
int main() {
int a,b,temp;
  int c=0, d=0;
  printf("Enter a number: \n");
  scanf("%d", &a);
  printf("Enter another number: \n");
  scanf("%d", &b);
  c=a;
  d=b;
  while(b!=0){
    temp=b;
    b= a%b;
    a=temp;
  }
  printf("THE GREATEST COMMON DIVISOR OF %d and %d is %d",c,d,a );
    return 0;
}
