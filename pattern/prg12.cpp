#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for (i=5; i>=1; i--)
    {
       for (j=1; j<=i; j++)
       {
         cout<<" "<<i;
       }
       cout<<"\n";
       
    }   
}

/*output :-
 5 5 5 5 5
 4 4 4 4
 3 3 3
 2 2
 1
*/