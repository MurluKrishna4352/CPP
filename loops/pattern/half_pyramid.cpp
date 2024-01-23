#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MODI 998244353
#define INF le18
#define PI 3.141592653589793238462
using ll = long long;
using ull = unsigned long long;
using lld = long double;
signed main(){
    int ROWS,COLS;
    cin>>ROWS;
    // COLS = 5;
    for(int rows = 0; rows < ROWS; rows++){
        for(int cols = 0; cols<rows+1; cols++){
            cout<<"* ";
        }
        cout<<endl;
    }

}
