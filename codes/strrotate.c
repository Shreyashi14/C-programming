#include <stdio.h>
#include <string.h>

void reverse(char* str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void leftrotate(char* str, int d) {
    int len = strlen(str);
    reverse(str, 0, d-1);
    reverse(str, d, len-1);
    reverse(str, 0, len-1);
}

void rightrotate(char* str, int d) {
    int len = strlen(str);
    leftrotate(str, len - d);
}

int main() {
    char str1[] = "GeeksforGeeks";
    leftrotate(str1, 2);
    printf("%s\n", str1);

    char str2[] = "GeeksforGeeks";
    rightrotate(str2, 2);
    printf("%s\n", str2);
    return 0;
}