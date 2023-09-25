// Replace all Spaces with @

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

void replace_Spaces(char name[]){
    int i = 0;

    while(name[i] != '\0'){
        if(name[i] == ' '){
            name[i] = '@';
        }
        i++;
    }
}

int main()
{
    char name[100];
    cout<<"Enter String"<<endl;
    cin.getline(name,100);

    replace_Spaces(name);

    cout<<name<<endl;


    return 0;
}