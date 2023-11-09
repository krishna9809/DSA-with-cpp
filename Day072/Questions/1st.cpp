#include<iostream>
#include<string>
using namespace std;


void reverse(string &str, int start , int end){
    if(start > end){
        return;
    }

    swap(str[start],str[end]);

    reverse(str,start+1,end-1);
}

int main(){
    string str = "Krishnha";
 

    int start = 0;
    int end = 7;

    reverse(str,start,end);

    cout<<str<<endl;

}