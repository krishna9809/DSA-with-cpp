#include<iostream>
using namespace std;

class krishna{
    private:
    int weight;

    public:
    string name;
    int roll_num;
    int age;

    void run(){
        cout<<"Running"<<endl;
    }

    int getWeight(){
        return weight;
    }

    void setWeight(int w){
        weight = w;
    }


};

int main(){
    krishna k1;

    k1.age = 19;
    k1.name = "krishna";

    cout<<"Krishna Age:" <<k1.age<<endl;
    cout<<"Real name:"<<k1.name<<endl;
    k1.run();

    k1.setWeight(65);

    cout<<"Weight: "<<k1.getWeight()<<endl;

    

}





