// 2d Array basics

#include<iostream>
using namespace std;
int main()
{
    // Delare 

    // int arr[3][3];
    // cout<<"Enter the element of 2d Array: "<<endl;

    // //Input
    // for(int i = 0;i <3;i++){
    //     for(int j = 0; j<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // //Output
    // for(int i = 0;i <3;i++){
    //     for(int j = 0; j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    // }

    //Initialise;


    int brr[3][3] = {{1,3,4},
                      {4,3,2},
                      {33,9,7}};

  
  // row wise print

cout<<"Row wise print"<<endl;
  // outer loop
    for(int i = 0;i <3;i++){
        for(int j = 0; j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

cout<<"Column Wise print"<<endl;
   // column wise print

  // outer loop
    for(int i = 0;i <3;i++){
        for(int j = 0; j<3;j++){
            cout<<brr[j][i]<<" ";
        }
        cout<<endl;
    }

}