#include<iostream>
#include<string>
using namespace std;


bool palin(string &str, int start , int end){
    if(start >= end){
        return true;
    }

    if((str[start]!=str[end])){
        return false;
    }

    palin(str,start+1,end-1);
}

int main(){
    string str = "kkkk";
 

    int start = 0;
    int end = 3;

    int ans = palin(str,start,end);

    if(ans){
        cout<<"String is PalinDrome"<<endl;
    }
    else{
        cout<<"string is Not Palindrome"<<endl;
    }

}