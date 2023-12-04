// OOPS

#include<iostream>
using namespace std;

class Animal{
    public:
 string name;
 int age;

 //baheviour
 void eat(){
cout<<"Eating"<<endl;
 }

 void sleep(){
cout<<"Sleeping"<<endl;

 }

};

int main()
{
    // Object Creation

    // Static
    Animal Ramesh;
    Ramesh.age = 12;
    Ramesh.name = "Lion";

    

    cout<<"Age of Ramesh is "<<Ramesh.name<<endl;

    cout<<"Age of Ramesh is "<<Ramesh.age<<endl;
    // Dynamic Allocation
    Ramesh.eat();
    Ramesh.sleep();
}