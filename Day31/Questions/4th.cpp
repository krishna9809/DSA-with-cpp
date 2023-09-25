// Palindrome

#include<iostream>
using namespace std;

int getLength(char name[]){
    int length = 0;
    int i = 0;
    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

bool Palindrome_String(char name[]){
    int s = 0;
    int e = getLength(name) - 1;

    while(s<=e){
        if(name[s++]!=name[e--]){
            return false;
        }
    }
    return true;


}
int main()
{
    char name[100];
    cout<<"Enter String"<<endl;
    cin>>name;

    if(Palindrome_String(name)){
        cout<<"Yes it is a Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }




    return 0;
}