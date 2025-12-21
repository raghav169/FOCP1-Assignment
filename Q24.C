#include <stdio.h>
int main() {
    char s[1000];
    int i;
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;   // Convert uppercase to lowercase
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;   // Convert lowercase to uppercase
        }
    }
    printf("%s", s);
    return 0;
}
