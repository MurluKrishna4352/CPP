//swap of 2 vars using XOR
#include <bits/stdc++.h>
#define MOD 1000000007
#define MODI 998244353
#define INF le18
#define PI 3.141592653589793238462
using namespace std;
using ll = long long;
using ull = unsigned long long;
using lld = long double;
signed main(){
    int a,b;
    a=2;b=3;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"swapped numbers: "<<a<<' ' <<b;
}