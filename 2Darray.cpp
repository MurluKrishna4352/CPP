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
int row_sum(int arr[][4],int row, int col){
    int sum;
    for (int i=0; i<row; i++){
        int sum = 0;
        for (int j=0;j<col;j++){
            sum += arr[i][j];

        }
        cout<<sum<<endl;
        // return sum;

        
    }}
    void transpose(int arr[][4],int row,int col){
        for (int i=0; i<row; i++){
            for (int j=i; j<col;j++){
                swap(arr[i][j],arr[j][i]);

            }
        // cout<<"After taking TRANSPOSE of the give matrix: "<<endl<<arr<<endl;

        }
    }
signed main(){
    //printing 2D array
    int row = 2;
    int col = 4;
    int arr[][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11},
        {12,13,14,15}
        };

    // printarr_rowise(arr,2,4);

    // row wise sum of 2D array
    // row_sum(arr,row,col);
    cout<<"after taking TRANSPOSE: "<<endl;
    transpose(arr,row,col);
    printarr_rowise(arr,row,col);
}
