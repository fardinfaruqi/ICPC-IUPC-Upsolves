#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() { 
  string s; cin >> s;
  ll cnt = 0;
  for(auto i: s) {
    if(i == '\\') break;
    cnt++;
  }
  cout << (cnt == s.size() ? s.size() + 1: s.size()) << " " << cnt << nl;
  return; 
}
int main() {
  fast_io;
  ll t = 1; 
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}