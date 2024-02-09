#include <iostream>
#include<climits>
using namespace std;

int main()
{

int num, i = 1, j = 0;

cout<<"Enter number : ";
cin >> num;

while(i<=num)
{

     j = 0;

     while(j<i)
        {
            cout<<"*";
            j++;
        }


     cout<<"\n";

     i++;

}
    return 0;
}
