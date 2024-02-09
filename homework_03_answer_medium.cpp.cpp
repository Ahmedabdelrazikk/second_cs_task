#include <iostream>
#include<climits>
using namespace std;

int main()
{

int a,b,c,max_=INT_MIN;

cout <<"Numbers : ";
cin >>a>>b>>c;

    if(a<100)
        max_=a;

    if(b<100 && b>max_)
        max_=b;

    if(c<100 && c>max_)
        max_=c;


        if(max_==INT_MIN)
            cout<<-1;
        else
            cout<<max_;

    return 0;
}
