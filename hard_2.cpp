#include <iostream>
#include<climits>
using namespace std;

int main()
{


int s1,e1,s2,e2;

cout<<"Enter start & end of two intervals : ";
cin >>s1>>e1>>s2>>e2;

if((s2>=s1 && s2<=e1) && (e2>=s1 && e2<=e1))
    cout << " From "<<s2<<" To "<<e2;

else if((s2>=s1 && s2<=e1)&&(e2>e1))
    cout << " From "<<s2<<" To "<<e1;

else if((s1<=e2 && s1>=s2) && (e1<=e2 && e1>=s2))
    cout << " From "<<s1<<" To "<<e1;

else if((s1>=s2 && s1<=e2)&&(e1>e2))
    cout << " From "<<s1<<" To "<<e2;

else
    cout << -1;

    return 0;
}
