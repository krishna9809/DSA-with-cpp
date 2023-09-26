// Numeric Full Pyramid

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows:"<<endl;
    cin>>n;

    for(int i = 0;i<n;i++){
        //spaces
        for(int j = 0;j<n-i-1;j++){
            cout<<"  ";
        }
        //1st pyramid
        int start = i + 1;
        for(int  j = 0 ; j<i+1;j++){
            cout<<start<<" ";
            start++;
        }
        //second pyramid
        int start1 = i*2;
        for(int j = 0;j<i;j++){
            cout<<start1<<" ";
            start1--;
        }
        cout<<endl;
    }
}


// output:
// Enter the no. of rows:
// 5
//         1 
//       2 3 2 
//     3 4 5 4 3 
//   4 5 6 7 6 5 4 
// 5 6 7 8 9 8 7 6 5 