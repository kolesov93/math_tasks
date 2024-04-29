#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ld PI = acosl(-1.);

void make_up_to_k(vector<int>& a, int k) {
    ll sum = 0;
    while (true) {
        int cand = sum + 1;
        if (sum + cand >= k) {
            cand = max(0LL, k - 1 - sum);
        }
        if (cand == 0) {
            break;
        }
        a.push_back(cand);
        sum += cand;
    }
}

void make_up_to_n(vector<int>& a, int n, int k) {
    int sums_up_to = k - 1;
    while (sums_up_to < n) {
        int cand = max(k + 1, sums_up_to + 1);
        a.push_back(cand);
        sums_up_to += cand;
    }
    a.push_back(k + 1);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, k;
        scanf("%d%d", &n, &k);
        vector<int> ans;
        make_up_to_k(ans, k);
        make_up_to_n(ans, n, k);

        printf("%d\n", ans.size());
        for (int x : ans) {
            printf("%d ", x);
        }
        puts("");
    }


    return 0;
}

