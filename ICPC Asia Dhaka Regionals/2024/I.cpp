#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() { 
  ll n; cin >> n;
  // n++;
  vector<ll> a(n), b(n), c(n);
  ll mx = 0, mn = LLONG_MAX;
  for(ll i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] > mx) {
      b[i] = 1;
    }
    mx = max(mx, a[i]);
  }
  for(ll i = n - 1; i >= 0; i--) {
    if(a[i] < mn) {
      c[i] = 1;
    }
    mn = min(mn, a[i]);
  }

  // for(auto &i: a) {
  //   cout << i << " ";
  // } cout << nl;
  // for(auto &i: b) {
  //   cout << i << " ";
  // } cout << nl;
  // for(auto &i: c) {
  //   cout << i << " ";
  // } cout << nl;
  // cout << nl;

  for(ll i = 0; i < n; i++) {
    if(b[i] == c[i]) {
      cout << i + 1 << nl;
      return;
    }
  }
  cout << "Humanity is doomed!" << nl;
  return; 
}
int main() {
  fast_io;
  ll t = 1; 
  cin >> t;
  for(ll i = 1; i <= t; i++) {
    cout << "Case " << i << ": ";
    solve();
  }
  return 0;
}