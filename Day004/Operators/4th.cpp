// Break and continue Statement

#include<iostream>
using namespace std;
int main(){
    // break
    for(int i = 0;i<5;i++){          // Exit at i == 2
        if(i==3){
            break;
        }                             
        cout<<"krishna"<<endl;
    }

    // Continue

     for(int i = 0;i<5;i++){
        if(i==3){                 // skip when i == 3
            continue;
        }                             
        cout<<i<<endl;
    }
}