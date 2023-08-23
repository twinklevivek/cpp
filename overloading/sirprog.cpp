#include<iostream>
using namespace std;
class test{
    public:
    test()
    {
       cout<<"defualt constructor is colled..."<<endl;
    }
    test(int a)
    {
        cout<<"square of number is:"<<a*a<<endl;
    }
    test(int a,int b)
    {
        cout<<"addittiton of a and b is :"<<a+b<<endl;
    }
    test(char b)
    {
        cout<<"character is:"<<b<<endl;
    }
};
int main()
{
    test a,b('s'),c(5.2,3.3),d(2,5),e(10);

}

