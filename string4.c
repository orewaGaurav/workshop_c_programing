#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    
    
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
    char str[100];
    
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    
    if (str[stringLength(str) - 1] == '\n') {
        str[stringLength(str) - 1] = '\0';
    }
    
    int length = stringLength(str);
    
    printf("The length of the string is: %d\n", length);
    
    return 0;
}