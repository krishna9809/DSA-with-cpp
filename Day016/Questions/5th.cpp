// Wave Print a Matrix
#include<iostream>
#include<vector>
using namespace std;

void wavePrint(vector<vector<int> >v){
    int row = v.size();
    int col = v[0].size();

    for(int i = 0 ; i < col; i++){

        // even no of column ==>> top to bottom

        if((i & 1) ==0){
            for(int j = 0 ; j < row;j++){
                cout<<v[j][i]<<" ";
            }
        }
        else{
            // odd no. od column ==> bottom to top

            for(int j = row - 1; j>=0;j--){
                cout<<v[j][i]<<" ";
            }
        }
    }
}

int main()
{
       vector<vector<int> >v {{1,6,3,4},
                      {4,5,3,2},
                      {33,9,66,7}};
       
       wavePrint(v);

       
}