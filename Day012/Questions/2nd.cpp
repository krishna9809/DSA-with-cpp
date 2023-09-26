// linear search in 2d array

bool linearSearch(int brr[][3] , int row ,int col,int key){


        for(int i = 0;i <3;i++){
        for(int j = 0; j<3;j++){
            if(brr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

#include<iostream>
using namespace std;

int main()
{
       int brr[3][3] = {{1,3,4},
                      {4,3,2},
                      {33,9,7}};
       int result = linearSearch(brr,3,3,3);

       if(result){
        cout<<"Found"<<endl;
       }
       else{
        cout<<"Not Found"<<endl;
       }
}