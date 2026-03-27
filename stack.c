#include <stdio.h>
#include <string.h>

int match(char a, char b) {
    if (a=='(' && b==')') return 1;
    if (a=='[' && b==']') return 1;
if (a=='{' && b=='}') return 1;
    return 0;
}

int main() {
    char expr[200];
    int caseNo = 1;
while (fgets(expr, sizeof(expr), stdin)) {
        char stack[200];
        int top=-1;
       int maxsize=0;
       int balanced=1;
for (int i = 0; expr[i] != '\0'; i++) {

            char ch = expr[i];

            if (ch=='(' || ch=='[' || ch=='{') {
                stack[++top] = ch;
                if (top + 1 > maxSize)
                    maxSize = top + 1;
            }
  else if (ch==')' || ch==']' || ch=='}') {
                if (top == -1 || !match(stack[top], ch)) {
                    balanced = 0;
                    break;
 }
top--;}
}
}
if (top != -1)
            balanced = 0;

        printf("%d: ", caseNo);
  if (balanced)
            printf("Balanced. Maximum stack size = %d.\n", maxSize);
        else
            printf("Not balanced.\n");

        caseNo++;
    }

    return 0;
}

      
