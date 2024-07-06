#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <ctime>
#include <algorithm>
#include <sstream>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <cstdlib>
#include <cstdio>
#include <iterator>
#include <functional>
#include <unordered_set>
#include <unordered_map>
#include <stdio.h>
#include <bitset>
#include <cstdint>
#include <cassert>
#include <functional>
#include <complex>
#include <random>
 
using namespace std;
 
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define ld long double
 
const ll maxn = 1e6 + 1, maxm = 1e3 + 1, maxk = 21;
const ll mod = 1e9 + 7, cmod = 998244353, inf = 1e9, block = 600, pp2 = 31;
const ld eps = 1e-9;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    int b[n + 1];
    for (int i = 1; i <= n; ++i){
        cin >> b[i];
    }
    ll ans = 0;
    for (int i = 1; i <= n; ++i){
        for (int j = i + 1; j <= n; ++j){
            ans += (a[i] > a[j]);
            ans -= (b[i] > b[j]);
        }
    }
    cout << abs(ans);
}








	   		 		 		  	 		  	    		  		
