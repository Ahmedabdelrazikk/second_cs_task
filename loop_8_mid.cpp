#include <iostream>
#include<climits>
using namespace std;

int main()
{

int n, i=0, c=0;

cin>> n;


while(true)
{
    if(c<n )
    {
       if(i%3==0 && i%4!=0)
         {

            cout<<i<<" ";
            c++;
         }

    }
    else
        break;

    i++;
}
















    return 0;
}
