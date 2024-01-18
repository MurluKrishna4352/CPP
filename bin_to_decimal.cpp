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

    // int n;
    // int i=0;
    // cin>>n;
    // int decimal;
    // while(n){
    //     int bit = n%10;
    //     // decimal = decimal + bit * pow(2,i++);
    //     n/=10;
    //     decimal = decimal+bit*pow(2,i++);
    // }   
// return decimal;
    int num;
    int dec_value = 0;
    cin>>num;
    // Initializing base value to 1, i.e 2^0
    int i =0;

    while (num) {
        int bit = num % 10;
        num /= 10;
        dec_value += bit * pow(2,i++);
        
     }
 
    // return dec_value;
    cout<<dec_value;
}