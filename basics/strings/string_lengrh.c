#include <stdio.h>

int main() {

char str[100];
int length = 0;

printf("Enter Sring:" );
scanf("%s", &str);

while(str[length] != '\0')
  length++;

printf("Length = %d", length);

return 0;
}

