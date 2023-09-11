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
void printarr_rowise (int arr[][4], int row, int col){
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout<<arr[i][j];
    }    
    }
    
}
signed main(){
    int arr[][4] = {
        {0,1,2,3},
        {4,5,6,7}
    };
    // int row = 2;
    // int 
    printarr_rowise(arr,2,4);
}