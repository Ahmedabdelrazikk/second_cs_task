#include <iostream>
#include<climits>
using namespace std;

int main()
{

int x,a,b,c,d,e,_max=0,_min=0;

cout<<"Number to check: ";
cin>>x;
cout <<"Numbers : ";
cin >>a>>b>>c>>d>>e;

if(a>x)
    _max++;
else
    _min++;

if(b>x)
    _max++;
else
    _min++;

if(c>x)
    _max++;
else
    _min++;

if(d>x)
    _max++;
else
    _min++;

if(e>x)
    _max++;
else
    _min++;

  cout<<"numbers <= X : "<<_min<<"  numbers > X : "<<_max;

    return 0;
}
