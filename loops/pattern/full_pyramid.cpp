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
    // full pyramid
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int k =0;
        for(int j=0; j<((2*n)-1);j++){
            if(j<(n-i-1)){
                cout<<" ";
            }
            else if(k<(2*i+1)){
                cout<<'*';
                k++;
            }
            else{cout<<"  ";}
        }
        cout<<endl;
    }
}