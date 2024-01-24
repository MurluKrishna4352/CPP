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
        for(int r =0; r<n; r++){
            for(int col=0; col<n-r; col++){
                if (r == 0 || r == n-1){
                    cout<<"* ";
                    
                }
                else{
                    if(col == 0 || col == n-r-1){
                        cout<<"* ";
                    }
                    else{
                        cout<<"  ";
                    }
                }
            }
            cout<<endl;
        }
}
