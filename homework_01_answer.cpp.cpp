#include <iostream>

using namespace std;

int main()
{

int a,b;

cout <<"Numbers : ";
cin >>a>>b;

if ( a%2==!0 && b%2==!0 ) //If both are odd
    cout<<a*b;

else if ( a%2==0 && b%2==0 ) //If both are even
    cout<<a/b;

else if ( a%2==!0 && b%2==0 ) //If the first number is odd, and the second is even
    cout<<a+b;

else if ( a%2==0 && b%2==!0 ) //If the first number is even, and the second is odd
    cout<<a-b;


    return 0;
}
