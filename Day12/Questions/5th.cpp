// Transpose of 2d array


#include<iostream>
using namespace std;

void Transpose(int brr[][3] , int row ,int col, int trans[3][3]){

        for(int i = 0;i <3;i++){
        for(int j = 0; j<3;j++){
            trans[j][i] = brr[i][j];
        }
    }
}

void printarray(int trans[][3] , int row ,int col){
 
 for(int i = 0;i <3;i++){
        for(int j = 0; j<3;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }

}


int main()
{
       int brr[3][3] = {{100,3,4},
                      {0,3,2},
                      {33,99,7}};
        int trans[3][3];
       Transpose(brr,3,3,trans);
       printarray(trans,3,3);

  
}