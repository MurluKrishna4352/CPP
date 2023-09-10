#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"before dividing by size of DT: "<<sizeof(arr)<<endl;//will give the (number of elements) x (size of <DATA_TYPE>)
    cout<<"after dividing by size of DT: "<<(sizeof(arr))/sizeof(int)<<endl;//will give the (number of elements) x (size of <DATA_TYPE>)

}