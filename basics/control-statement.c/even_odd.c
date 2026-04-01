#include <stdio.h>

int main() {
int num;

printf("Enter Number here: \n", num);
scanf("%d", &num);

if (num % 2 == 0)
printf("Number is Even = %d\n", num);
  
  else
printf("Number is odd = %d\n", num);

return 0;
}

