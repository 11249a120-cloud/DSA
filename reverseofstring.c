#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n')
        str[len-1] = '\0';
