#include<iostream>
using namespace std;
class report{
    int adno,i,total=0;
    char name[20];
    float marks[5],avg;
    int getavg(){
        for ( i=0; i<=4; i++)
        {
            cout<<"enter marks["<<i<<"]:";
            cin>>marks[4];
        }
        return avg;
    }
    public:
    void readinfo(){
        cout<<"enter adno:";
        cin>>adno;
        cout<<"enter name:";
        cin>>name;
        
    }
    void displayinfo(){
        cout<<"adno is:"<<adno<<endl;
        cout<<"name is:"<<name<<endl;
        total= getavg();
        avg= getavg();

    }
};
int main(){
    report a;
    a.readinfo();
    a.displayinfo();
}
