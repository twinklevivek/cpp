#include<iostream>
using namespace std;
class Box{
    int l,w,h;
    public:
    void setdata (int a,int b,int c){
        l=a,w=b,h=c;
    }
    int getdata(){
        return l*w*h;
    }
    Box operator--(int){
        Box t;
        t.l=l--;
        t.w=w--;
        t.h=h--;
        return t;
    }
};
int main(){
    Box a,b;
    a.setdata(2,3,4);
    cout<<"volume of box A is:"<<a.getdata()<<endl;
    a--;
    b=a;
    cout<<"volume of box B is:"<<b.getdata()<<endl;
    cout<<"volume of box A is:"<<a.getdata()<<endl;
}



