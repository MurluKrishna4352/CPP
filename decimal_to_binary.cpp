#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MODI 998244353
#define INF le18
#define PI 3.141592653589793238462
using namespace std;
using ll = long long;
using ull = unsigned long long;
using lld = long double;
signed main(){
    int num,bin_num,i;
    i=0;
    cin>>num;
    bin_num=0;
    while(num!=0){
        int rem;
        rem = num%2;
        // cout<<rem;
        bin_num = rem*pow(10,i++)+bin_num;
        num /=2;
        

    }
        cout<<bin_num;
}