#include <iostream>
#include<climits>
using namespace std;

int main()
{


int s1,e1,s2,e2,s3,e3,num,i=0;
cout<<"Enter number : ";
cin>>num;
cout<<"Enter 6 number like start and end : ";
cin >>s1>>e1>>s2>>e2>>s3>>e3;


if(num>=s1 && num<=e1)
    i++;
if(num>=s2 && num<=e2)
    i++;
if(num>=s3 && num<=e3)
    i++;

cout << "Number of intervals = "<<i;



    return 0;
}
