#include <iostream>
#include<climits>
using namespace std;

int main()
{

int num, i = 1, j = 0;

cout<<"Enter number : ";
cin >> num;

while(num>0)
{

     j = 0;

     while(j<num)
        {
            cout<<"*";
            j++;
        }


     cout<<"\n";

     num--;

}
    return 0;
}
