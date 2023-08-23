#include<iostream>
using namespace std;
class test{
    char name[50],locathon[50],hoobie[50],colificathon[50];
    int family,age;
    public:
    test()
    {
        cout<<"defualt.constructor is called..."<<endl;
        cout<<"name :";
        cin>>name;
        cout<<"locathon :";
        cin>>locathon;
        cout<<"hoobie :";
        cin>>hoobie;
        cout<<"colificathon :";
        cin>>colificathon;
        cout<<"family:";
        cin>>family;
        cout<<"age :";
        cin>>age;
    }

    ~test(){
        cout<<"destructor is called.."<<endl;
    }

    void getdata(){
        cout<<"name:"<<name<<endl;
        cout<<"locathon:"<<locathon<<endl;
        cout<<"hoobie:"<<hoobie<<endl;
        cout<<"colifcathon:"<<colificathon<<endl;
        cout<<"family:"<<family<<endl;
        cout<<"age:"<<age<<endl;
    }
};

int main()
{
    test a;
    a.getdata();
}
