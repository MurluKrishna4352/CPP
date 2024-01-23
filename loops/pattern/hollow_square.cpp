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
    // for(int i=0; i<5; i++){
    //     if(i==0 || i==4){
    //         cout<<"* * * * *";
    //     }
    //     else{cout<<"* "<<"      "<<'*';}
    //     cout<<endl;
    // }
    int ROWS,COLS;
    cin>>ROWS;
    cin>>COLS;
    for(int rows=0;rows<ROWS;rows++){
        for(int cols = 0; cols<COLS; cols++){
            if(rows == 0 || rows == ROWS-1){
                cout<<"* ";
            }
            else{
                if (cols==0 || cols == COLS-1){
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