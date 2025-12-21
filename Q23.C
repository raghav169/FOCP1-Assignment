#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int G, P;
        scanf("%d %d", &G, &P);
        int N;
        scanf("%d", &N);
        int count1 = 0, count2 = 0;
        for (int i = 0; i < N; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            count1 += a;
            count2 += b;
        }
        int cost1 = count1 * G + count2 * P;
        int cost2 = count1 * P + count2 * G;
        printf("%d\n", cost1 < cost2 ? cost1 : cost2);
    }
    return 0;
}
