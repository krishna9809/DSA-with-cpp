//condition

// else - if

#include<iostream>
using namespace std;

int main(){
    int score;
    cout<<"Enter The Score"<<endl;
    cin>>score;

    if(score>300){
        cout<<"India wins"<<endl;
    }
    else if(score==50){
        cout<<"Match is Tie"<<endl;
    }
    else if(score < 200){
        cout<<"netherland lose"<<endl;
    }
    else{
        cout<<"Score is wrong"<<endl;
    }
}