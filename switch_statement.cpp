// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     double a,b;
//     char opr;
//     cin>>a>>opr>>b;
//     switch(opr)
//     {
//         case '+':
//         cout<<a+b<<'\n';
//         break;
//         case '-':
//         cout<<a-b<<'\n';
//         break;
//         case '*':
//         cout<<a*b<<'\n';
//         break;
//         case '/':
//         cout<<a/b<<'\n';
//         break;
//     default:
//         cout<<"Wrong num";
//     }
    
//     return 0;
// }


// student marks calculator grade alloter 
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     float s1,s2,s3,s4,s5;
//     cout<<"enter marks out of 100: "<<'\n';
//     cin>>s1>>s2>>s3>>s4>>s5;
//     float total;
//     total = ((s1+s2+s3+s4+s5)/5);
//     switch(total<=50){
//         case 1:
//                 cout<<"your grade is B";
//                 break;
//         case 2:
//                 cout<<"your grade is A";
//                 break;
//         default:
//             cout<<"invalid i/p";
        
//     }


// }



//1-Take 10 integer inputs from user and store them in an array and print them on screen.
// #include <bits/stdc++.h>
// #define MOD 1000000007
// #define MODI 998244353
// #define INF le18
// #define PI 3.141592653589793238462
// using namespace std;
// using ll = long long;
// using ull = unsigned long long;
// using lld = long double;
// // using endl = '\n';
// signed main(){
//         int arr[5];
//         cout<<"enter numbers: "<<endl;
//         for(int i=0; i <5; i++){
                 
//                 cin>>arr[i];
//         }
//         for(int J=0; J <5; J++){
//                 cout<<arr[J]<<' ';
//         }
// }

//2-
/*number of negative numbers
number of odd numbers
number of even numbers
number of 0.*/
#include <bits/stdc++.h>
#define MOD 1000000007
#define MODI 998244353
#define INF le18
#define PI 3.141592653589793238462
using namespace std;
using ll = long long;
using ull = unsigned long long;
using lld = long double;
signed main(){
        int arr[5];
        int negative,odd, even,zero;
        cout<<"enter numbers: "<<endl;
        for(int i=0; i <5; i++){
                 
                cin>>arr[i];
        }
        for(int J=0; J <5; J++){
                cout<<arr[J]<<' ';
                if(arr[J]<0){
                        negative = negative+1;}
                else{continue}
                if (arr[J]%2==0){
                        even = even+1;
                }
                else{odd=odd+1;}
                if(arr[J]==0){
                        zero= zero+1;}
                else

                
        }

        cout<<"negative : "<<negative<<" odd: "<<odd<<" even: "<<even<<" zero: "<<zero;

}


// largest and smallest number in an array
// #include <bits/stdc++.h>
// #define MOD 1000000007
// #define MODI 998244353
// #define INF le18
// #define PI 3.141592653589793238462
// using namespace std;
// using ll = long long;
// using ull = unsigned long long;
// using lld = long double;
// signed main(){
//         int arr[5];
//         int negative,odd, even,zero;
//         cout<<"enter numbers: "<<endl;
//         for(int i=0; i <5; i++){
                 
//                 cin>>arr[i];
//         }
//         int largest = arr[0];
//         int smallest= arr[0];
//         for(int i=0; i <5; i++){
//         if(arr[i]>largest){
//                 largest = arr[i];
//         }
//         if(arr[i]<smallest){
//                 smallest = arr[i];
//         }
//         }
//         cout<<largest<<' '<<smallest;

// }