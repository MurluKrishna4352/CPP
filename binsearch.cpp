#include <iostream>
#define MOD 1000000007
#define MODI 998244353
#define INF le18
#define PI 3.141592653589793238462
using namespace std;
using ll = long long;
using ull = unsigned long long;
using lld = long double;
int bin_search(int arr[],int n,int target){
    int start =0;
    int end =n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if (target == mid){
            // cout<<mid<<endl;
            return mid;
        }
        else if (target<arr[mid]){
            end = mid - 1;
        }
        else if(target>arr[mid]){
            start = mid + 1;
        }

    }
    return -1;
}
signed main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    int target = 9;
    int ans= bin_search(arr,10,9);
}