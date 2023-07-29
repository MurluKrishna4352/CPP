#include <bits/stdc++.h>
#define MOD 1000000007
#define MODI 998244353
#define INF le18
#define PI 3.141592653589793238462
using namespace std;
using ll = long long;
using ull = unsigned long long;
using lld = long double;

double square(int a){ // declaring a function
    return sqrt(a);      // when fucnction isn't r
}
signed main(){
    // int num;
    // cin>>num;
    // square(num);
    // char a[10];
    // int j;
    // cout<<"Enter a string "<<endl;
    // cin>>a; 
    // j=strlen(a);
    // for( j=0; j<5;j++)
    // {
    //     cout<<a[j]<<endl;
    // }
    // return 0;
    char a[9]="Computer";
    char b[9]="Keyboard";

    strlwr(a);
    cout<<a<<'\n';
    strupr(a);
    cout<<a<<endl;
    strcat(a,b);
    cout<<a<<endl;
    if(strcmp(a,b)==0){
        cout<<"strings are same"<<endl;
    }
    else{cout<<"strings are not same"<<endl;}
    strcpy(a,b);
    cout<<a<<' '<<b<<endl;
    strcpy(b,a);
    cout<<a<<' '<<b<<endl;
}