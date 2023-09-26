// PRint the Grade of marks A , B , C , D and E

#include<iostream>
using namespace std;
char getgrade(int marks){
    if(marks>=90){
        return 'A';
    }
    else if(marks>=80){
        return 'B';
    }
    else if(marks>=70){
        return 'C';
    }
    else if(marks>=60){
        return 'D';
    }

return 'E';
}
int main(){
    int marks;
    cout<<"Enter the marks:"<<endl;
    cin>>marks;
    char grade = getgrade(marks);
    cout<<"Your Grade is: "<<grade<<endl;
}