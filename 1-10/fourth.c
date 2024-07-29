#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "XML";
    int lenOfStr = strlen(str);
    char reverseStr[lenOfStr + 1];

    for (int i = 0; i < lenOfStr; i++) {
        reverseStr[i] = str[lenOfStr - 1 - i];
    }

    reverseStr[lenOfStr] = '\0';

    printf("the reverse of %s is %s\n", str, reverseStr);
}