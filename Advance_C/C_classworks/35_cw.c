#include <stdio.h>

// Custom implementation of strncmp
int my_strncmp(const char *str1, const char *str2, int n) {
    while (n && *str1 && (*str1 == *str2)) {
        str1++;
        str2++;
        n--;
    }
    if (n == 0) {
        return 0; // Strings are equal up to n characters
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int main() {
    char str1[100], str2[100];
    int n;
    
    printf("Enter the string1: ");
    scanf("%s", str1);

    printf("Enter the string2: ");
    scanf("%s", str2);

    printf("Enter the n: ");
    scanf("%d", &n);

    int result = my_strncmp(str1, str2, n);

    if (result == 0) {
        printf("str1 is equal to str2.\n");
    } else if (result < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str2 is less than str1\n");
    }

    return 0;
}

