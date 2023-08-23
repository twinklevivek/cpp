#include<iostream>
using namespace std;
class calc{
    public:
    int add (int a,int b){
        return a*b;
    }
    int add (int a){
        return a*a;
    }
    int add (int a,int b,int c){
        return a*b*c;
    }
    double add(double a,double b){
        return a+b;
    }
    };
    int main()
    {
        calc a;
        cout<<"addition of a and b is:"<<a.add(6.3,5.8)<<endl;
        cout<<"square is:"<<a.add(5)<<endl;
        cout<<"product of a,b and c is:"<<a.add(2,3,4)<<endl;
        cout<<"product of a.add b is:"<<a.add(5,3)<<endl;
    }
    