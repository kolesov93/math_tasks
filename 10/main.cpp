#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ld PI = acosl(-1.);

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, k;
        scanf("%d%d", &n, &k);
        vector<int> a(n + 1);
        for (int i = 1; i <= n; ++i) {
            scanf("%d", &a[i]);
        }

        vector<int> used_shift(n + 1);
        int current_shift = 0;
        int got_steps = 0;
        while (got_steps < k) {
            if (used_shift[current_shift]) {
                got_steps = k;
                break;
            }
            used_shift[current_shift] = 1;
            int idx = (((n - 1) + current_shift) % n) + 1;
            if (a[idx] > n) {
                break;
            }
            current_shift = (current_shift + n - a[idx]) % n;
            ++got_steps;
        }

        if (got_steps >= k) {
            puts("Yes");
        } else {
            puts("No");
        }
    }

    return 0;
}

