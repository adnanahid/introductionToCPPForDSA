#include <stdio.h>

int main() {
    char s1[1005], s2[1005];
    int start, end;

    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%d %d", &start, &end);

    printf("%s", s1);

    for (int i = start; i <= end && s2[i] != '\0'; i++) {
        printf("%c", s2[i]);
    }
    printf("\n");

    return 0;
}