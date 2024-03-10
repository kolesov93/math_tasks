#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ld PI = acosl(-1.);

ll process(const vector<int>& a, ll c) {
  ll ans = 0;
  int right = static_cast<int>(a.size()) - 1;
  for (int left = 0; left < a.size(); ++left) {
    ll cur = a[left];
    ll max_value = c + c - cur;
    while (right >= 0 && a[right] > max_value) {
      --right;
    }
    ans += max(0, right - left + 1);
  }
  return ans;
}

ll process_plus(const vector<int>& a, ll c) {
  ll ans = 0;
  for (ll x : a) {
    ll left = max(0LL, x - c);
    ll right = min(x / 2, c);
    ans += max(0LL, right - left + 1);
  }
  return ans;
}

ll process_minus(const vector<int>& a, ll c) {
  ll ans = 0;
  for (ll x: a) {
    ll left = x;
    ll right = c;
    ans += max(0LL, right - left + 1);
  }
  return ans;
}

int main() {
  int T;
  scanf("%d", &T);

  while (T--) {
    int n, c;
    scanf("%d%d", &n, &c);
    vector<int> odds, evens, a;
    while (n--) {
      int x;
      scanf("%d", &x);
      if (x & 1) odds.push_back(x);
      else evens.push_back(x);
      a.push_back(x);
    }
    ll have_both_plus_and_minus = process(odds, c) + process(evens, c);
    ll have_plus = process_plus(a, c);
    ll have_minus = process_minus(a, c);
    ll all = static_cast<ll>(c + 1) * (c + 2) / 2;
    ll ans = all - have_plus - have_minus + have_both_plus_and_minus;
    cout << ans << '\n';
  }

  return 0;
}

