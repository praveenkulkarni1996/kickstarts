/* Author: Praveen Kulkarni
 * HA.cpp
 * 11:58 2018-11-24 11:58
 * Copyright (C) 2018 pkulkarni <pkulkarni@Praveens-MacBook-Air.local>
 * #include "HA.h"
 */


#include <algorithm>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include <array>
#include <bitset>
#include <deque>
#include <forward_list>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

// types
#define int long long
#define endl '\n'

template<class C> void mini(C &a4, C b4) { a4 = min(a4, b4); }
template<class C> void maxi(C &a4, C b4) { a4 = max(a4, b4); }

template<class T> ostream &operator<<(ostream& os, vector<T> V) {
  os << "["; for (auto vv : V) os << vv << ","; return os << "]";
}
template<class K, class X> ostream &operator<<(ostream& os, map<K,X> V) {
  os << "["; for (auto vv : V) os << vv << ","; return os << "]";
}
template<class L, class R> ostream &operator<<(ostream &os, pair<L,R> P) {
  return os << "(" << P.st << "," << P.nd << ")";
}

using ii = pair<int, int>;
using vi = vector<int>;
using vii = vector<ii>;
using vvi = vector<vi>;
using vvii = vector<vii>;

int power(int a, int n, int mod) {
  int res = 1;
  while(n > 0) {
    if(n & 1) {
      res = (res * a) % mod;
    }
    a = (a * a) % mod;
    n >>= 1;
  }
  return res;
}

inline int solve(int a, int n, int p) {
  int res = (n == 1) ? a : solve(power(a, n, p), n-1, p);
  return res % p;
}

inline void testcase(int caseno) {
  int a, n, p; cin >> a >> n >> p;
  int answer = solve(a, n, p);
  cout << "Case #" << caseno << ": " << answer << endl;

}

int32_t main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  for(int tt = 1; tt <= t; ++tt) {
    testcase(tt);
  }
}
