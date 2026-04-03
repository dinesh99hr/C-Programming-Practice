#include <stdio.h>
#include <string.h>

int main() {

char str[100];
int i, length, flag = 0;

printf("Enter string:" );
scanf("%s", str);

length = strlen(str);

for(i = 0; i < length; i++) {
if(str[i] != str[length -i -1]) {
flag = 1;
break;
}
}

if(flag == 0)
  printf("Palindrome");
else
  printf("Not Palindrome");
return 0;
}



----------------------------------------
## Improved_code_Palindrom
----------------------------------------
#include <stdio.h>
#include <string.h>
#include <ctype.h> // Needed for tolower()

int main() {
    char str[100];
    int i, length;
    int isPalindrome = 1;

    printf("Enter a word: ");
    // %99s limits input to 99 characters to prevent buffer overflow
    scanf("%99s", str);

    length = strlen(str);

    for(i = 0; i < length / 2; i++) {
        // tolower() ensures 'A' and 'a' are treated as the same character
        if(tolower(str[i]) != tolower(str[length - i - 1])) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("\"%s\" is a palindrome.\n", str);
    else
        printf("\"%s\" is not a palindrome.\n", str);

    return 0;
}
