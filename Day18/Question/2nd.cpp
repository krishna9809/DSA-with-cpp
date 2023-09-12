// SquareRoot of a Number using binary Search ( float )

#include<iostream>
using namespace std;

int SquareRoot(int num){
    int s = 0;
    int e = num/2;

    int mid = s + (e - s)/2;
    
    int ans = 0;

    while(s<=e){
        if(mid * mid == num){
            return mid;
        }
        else if(mid * mid > num){
            e = mid -1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
        mid = s + ( e - s );
    }
    return ans;

}

int main()
{
    int num;
    cout<<"Enter the Num to Find SquareRoot: "<<endl;
    cin>>num;
    int square = SquareRoot(num);
    double finalans = 0;

    cout<<"SquareRoot of "<<num<<" is "<<square<<endl;
    int precise;
    cout<<"Enter the number of floating digits in precison "<<endl;
    cin>>precise;
    
    double step = 0.1;
    for(int i = 0; i<precise;i++){

        for(double j = finalans ; j * j <=num;j = j + step){
           finalans = j;
        }
        step = step / 10;
    }

    cout<<"more precise ans is "<<finalans<<endl;
    


}