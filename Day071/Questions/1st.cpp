#include<iostream>
#include<string>
using namespace std;


void lastoccur(string &str, int x, int i , int &ans){
    if(i >= str.size()){
        return;
    }

    if(str[i] == x){
        ans = i;
    }

    lastoccur(str,x,i+1,ans);
}

int main(){
    string str = "Krishnha";

    char x = 'h';

    int i = 0;
    int ans = -1;

    lastoccur(str,x,i,ans);

    cout<<"Your Answer is "<<ans<<endl;

}