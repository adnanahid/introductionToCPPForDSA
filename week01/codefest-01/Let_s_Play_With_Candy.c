#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int missing = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == missing)
            missing++;

    return 0;
}
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int a[100005];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     int missing = 0;
//     for (int i = 0; i < n; i++) {
//         if (a[i] == missing) {
//             missing++;
//         }
//         // if a[i] > missing, we found the gap
//         // if a[i] < missing, it's a duplicate, skip
//     }

//     printf("%d\n", missing);
//     return 0;
// }