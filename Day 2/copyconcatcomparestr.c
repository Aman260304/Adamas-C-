#include <stdio.h>

int main() {
    char str1[100], str2[100], str3[200];
    int i, j;
    int areEqual = 1;  // Flag to check if strings are equal

    // Input strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Copy str1 to str3
    for (i = 0; str1[i] != '\0'; i++) {
        str3[i] = str1[i];
    }
    str3[i] = '\0';  // Null terminate str3

    printf("Copied string: %s\n", str3);

    // Concatenate str2 to str3
    for (j = 0; str2[j] != '\0'; j++, i++) {
        str3[i] = str2[j];
    }
    str3[i] = '\0';  // Null terminate the concatenated string

    printf("Concatenated string: %s\n", str3);

    // Compare str1 and str2
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            areEqual = 0;
            break;
        }
    }

    if (areEqual) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}

