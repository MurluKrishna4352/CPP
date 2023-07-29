// #include <iostream>
// using namespace std;
// int main(){
//     int marks[5];
//     for (int i =0; i<5; i++){
//         cout<<"enter marks out of 100 "<<i+1<<':';
//         cin>>marks[i];
//     }

//     // for (int j = 0; j<5; j++){
//     //     cout<<"marks["<<j<<"] = "<<marks[j];
//     // }
//     auto sum =0;
//     for (int j =0; j<5; j++){
        
//         sum = sum + marks[j];

//     }
//     cout<<sum<<'\n';
// }
#include <iostream>
using namespace std;

int main() {
    int sales[5][12];
    int i,j;
    // clrscr();
    long total;
    for (i=0;i<12;i++)
    {
        total=0;
        cout<<endl<<"enter the sales: "<<i+1<<endl;
        for(j=0;j<=12;j++)
        {
            cout<<"Month"<<j++<<":";
            cin>>sales[i][j];
            total+=sales[i][j];
            
        }
        cout<<endl;
        cout<<"Total sale="<<i+1<<"="<<total<<endl;
    }
    return 0;
}