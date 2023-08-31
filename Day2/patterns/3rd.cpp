//Hollow Rectangle

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 3;
//     int m = 5;
//     for(int row = 0 ; row<n;row++){
//         for(int col = 0;col<m;col++){
//             if(row==0||row==n-1){
//                 cout<<"* ";
//             }
//             else if(col==0||col==m-1){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }

// or

#include<iostream>
using namespace std;
int main(){
    int n = 3;
    int m = 5;
    for(int row = 0 ; row<n;row++){
        if(row==0||row==n-1){
        for(int col = 0;col<m;col++){
                cout<<"* ";
        }
        }
            else{
                cout<<"* ";
                for(int k = 0;k<m-2;k++){
                cout<<"  ";
                }
                cout<<"* ";
            }
        cout<<endl;
        
    }
}