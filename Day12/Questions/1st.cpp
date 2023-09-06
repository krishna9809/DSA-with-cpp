// row sum of 2d array
// col sum of 2d array

#include<iostream>
using namespace std;

void rowsum(int brr[][3] , int row ,int col){


        for(int i = 0;i <3;i++){
            int sum = 0;
        for(int j = 0; j<3;j++){
            sum = sum + brr[i][j];
        }
        cout<<sum<<endl;
    }
}

void colsum(int brr[][3] , int row ,int col){


        for(int i = 0;i <3;i++){
            int sum = 0;
        for(int j = 0; j<3;j++){
            sum = sum + brr[j][i];
        }
        cout<<sum<<endl;
    }
}

int main()
{
       int brr[3][3] = {{1,3,4},
                      {4,3,2},
                      {33,9,7}};
       cout<<"Row wise Sum:"<<endl;
       rowsum(brr,3,3);

       cout<<"Column wise Sum:"<<endl;
       colsum(brr,3,3);
}