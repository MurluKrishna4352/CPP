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
    int n;
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0;col<row; col++){
            cout<<" ";
        }
        for(int i=0; i<n-row; i++){
            cout<<"* ";
        }
        cout<<endl;
    }
}