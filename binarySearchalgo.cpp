#include <iostream>
using namespace std;
int bin_search(int arr[],int n, int target){
    int s = 0;
    int e = n-1;
    while (s<=e){
    int mid = (s+e)/2;// we need to update value of mid everytime or else it will start from zero again 
        if (target==arr[mid]){
            return mid;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        else if(target > arr[mid]){
            s=mid+1;

        }
    }
    // agar yaha tk paunche ho toh element nhi hai array mai 

return -1;
};
int main(){
 int arr[]={10,20,30,40,50,60,70,80,90};
 int n = sizeof(arr);
 int target = 10;
 int ans= bin_search(arr,n,target);
 if (ans==-1){
    cout<<"element not found "<<endl;

 }
 else{
        cout<<"element is found at index: "<<ans<<endl;

 }
 return 0;}
