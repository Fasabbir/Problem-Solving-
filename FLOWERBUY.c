#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        int min_cost = 1e9; // large initial value

        for (int x = 0; x <= N / 2; x++) {
            for (int y = 0; y <= N / 3; y++) {
                if (2 * x + 3 * y == N) {
                    int cost = 4 * x + 5 * y;
                    if (cost < min_cost) {
                        min_cost = cost;
                    }
                }
            }
        }

        printf("%d\n", min_cost);
    }

    return 0;
}
