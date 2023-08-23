#include<iostream>
using namespace std;
class test{
    public:
    test()
    {
    cout<<"defualt constructor is called...."<<endl;
    }
     test(int x)
  {
    cout<<"parmeter constructor is called...\n value of x:"<<x<<endl;
  }
};
int main()
{
    test c(10),a;
}

 