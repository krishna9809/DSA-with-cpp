// runtime polymorphism

#include<iostream>
using namespace std;

class animal{
    public:

    //virtual keyword for deciding runtime which function will call

    virtual void speak(){
        cout<<"Speaking"<<endl;
    }

};

class dog:public animal{
    public:

    void speak(){
        cout<<"Braking"<<endl;
    }
};

int main(){

    animal a;

    a.speak();

    dog d;

    d.speak();

    // Upcasting4

    animal* a2 = new dog();

    a2->speak();
}