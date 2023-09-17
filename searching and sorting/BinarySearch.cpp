#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    // there is some flaw in below line 
    int mid = (start+end)/2;
    while (start<=end){
        if(arr[mid]==target){
            return mid;
        else if (arr[mid]<target){
            start = mid+1;
        }
      
        else if(target<arr[mid]){
            end = (mid - 1);

        }
        mid = (start+end)/2

        }
        

    }
    return -1;


}

int FirstOccurance(int arr[],int n,int target){
    int start =0;
    int end =n-1;
    int mid = (start+end)/2;
    int ans = -1;
    while(start<=end){
        if (arr[mid]==target){
            ans = mid;
            end = mid -1;

        }
};

}
signed main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int target = 9;
    int n =9;
    int ansIndex= binarySearch(arr,n,target);

} 