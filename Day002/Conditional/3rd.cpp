//condition

// nested if-else

#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter The marks"<<endl;
    cin>>marks;

    if(marks>300){
        cout<<"Grade A"<<endl;
    }
    else{
        if(marks>200 ){
            cout<<"Grade B"<<endl;
        }
        else{
            cout<<"Grade C"<<endl;
        }
    }
    
}