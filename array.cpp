// create a list of stu name and roll no

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string student_name[3]= {"Krishna","Hello","World"};
    
//     int student_roll[3]= {1,2,3};

//     cout<<"student name: "<<student_name[0]<<endl;
//     cout<<"student name: "<<student_name[1]<<endl;
//     cout<<"student roll: "<<student_roll[0]<<endl;
//     cout<<"student roll: "<<student_roll[1]<<endl;
//     return 0;
// }


//display 4 num

#include <bits/stdc++.h>
using namespace std;
int main(){
    int number[4];
    for (int i=1; i<5; i++){
        cout<<"enter the numbers: ";
        cin>>number[i];
    }

    for (int j = 1; j<5; j++){
        
        cout<<"new loop"<<'\n'<<number[j]<<" ";
    }
}