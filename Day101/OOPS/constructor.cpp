#include<iostream>
using namespace std;

class animal{
    public:

    int age;
    int legs;


// default constructor
    animal(){

        cout<<"Constructor Called"<<endl;
        age = 12;
        legs = 4;
    }


// parameterised constructor
    animal(int age,int legs){

    cout<<"parameterised"<<endl;
    this->age = age;
    this->legs = legs;
   }

// Copy Constructor

  animal (animal& obj){
     this->age = obj.age;
     this->legs = obj.legs;
     cout<<"Copy Constuctor"<<endl;
  }
};

//

 

int main(){
    animal A1;

    cout<<A1.age<<endl;

    animal A2(12,4);

    cout<<A2.age<<endl;

    animal A3 = A2;

    cout<<A3.age<<endl;
    cout<<A3.legs<<endl;

}