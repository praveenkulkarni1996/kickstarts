/* Author: Praveen Kulkarni
 * CC.cpp
 * 17:28 2018-11-27 17:28
 * Copyright (C) 2018 pkulkarni <pkulkarni@Praveens-MacBook-Air.local>
 * #include "CC.h"
 */
#include <numeric>
#include <iomanip>
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

#define int long long
#define endl '\n'

template<class C> void mini(C &a4, C b4) { a4 = min(a4, b4); }
template<class C> void maxi(C &a4, C b4) { a4 = max(a4, b4); }

template<class L, class R> ostream &operator<<(ostream &os, pair<L,R> P) {
  return os << "(" << P.first << "," << P.second << ")";
}
template<class T> ostream &operator<<(ostream& os, vector<T> V) {
  os << "["; for (auto vv : V) os << vv << ","; return os << "]";
}
template<class K, class X> ostream &operator<<(ostream& os, map<K,X> V) {
  os << "["; for (auto vv : V) os << vv << ","; return os << "]";
}

using ii = pair<int, int>;
using vi = vector<int>;
using vii = vector<ii>;
using vvi = vector<vi>;
using vvii = vector<vii>;

char from_int(const int x) {
  return 'A' + x;
}

int from_char(const char ch) {
  return ch - 'A';
}

void solve(int casenum) {
  string s; cin >> s;
  string t = s;
  int n = s.length();
  if(n % 2) {
    cout << "Case #" << casenum << ": AMBIGUOUS" << endl;
    return;
  }
  t[1] = s[0];
  for(int i = 2; i < n; i += 2) {
    int num = (26 + from_char(s[i]) - from_char(t[i - 1])) % 26;
    t[i + 1] = from_int(num);
  }
  t[n-2] = s[n-1];
  for(int i = n - 3; i > 0; i -= 2) {
    int num = (26 + from_char(s[i]) - from_char(t[i + 1])) % 26;
    t[i-1] = from_int(num);
  }
  cout << "Case #" << casenum << ": " << t << endl;
}

int32_t main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  for(int i = 0; i < t; ++i) {
    solve(i+1);
  }
  return 0;
}
