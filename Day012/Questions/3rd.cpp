// Maximum no, in 2d array


#include<iostream>
using namespace std;

int Maximum(int brr[][3] , int row ,int col){

        int maxi = INT16_MIN;
        for(int i = 0;i <3;i++){
        for(int j = 0; j<3;j++){
            if(brr[i][j]>maxi){
                maxi = brr[i][j];
            }
        }
    }
    return maxi;
}


int main()
{
       int brr[3][3] = {{100,3,4},
                      {4,3,2},
                      {33,99,7}};
       int result = Maximum(brr,3,3);

       cout<<"Maximum of an array is: "<<result<<endl;
}