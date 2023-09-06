// Maximum no, in 2d array


#include<iostream>
using namespace std;

int Minimum(int brr[][3] , int row ,int col){

        int mini = INT16_MAX;
        for(int i = 0;i <3;i++){
        for(int j = 0; j<3;j++){
            if(brr[i][j]<mini){
                mini = brr[i][j];
            }
        }
    }
    return mini;
}


int main()
{
       int brr[3][3] = {{100,3,4},
                      {0,3,2},
                      {33,99,7}};
       int result = Minimum(brr,3,3);

       cout<<"Minimum of an array is: "<<result<<endl;
}