#include<iostream>
using namespace std;
class test{
    int age;
    public:
    test (int n){
        age = n;
    }
    int getage(){
        return age;
    }
    test (test &n){
        age = n.age;
    }
};

int main(){
    test a(20);
    cout<<"age of a is:"<<a.getage()<<endl;

    test b(a);
    cout<<"age of b is:"<<a.getage()<<endl;
}
