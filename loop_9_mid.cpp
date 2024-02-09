#include <iostream>
#include<climits>
using namespace std;

int main()
{


int n1 , n2 , n3 ,_min=INT_MAX;
cin >> n1;

while(n1>0)
{
    cin >> n2;

    while(n2>0)
    {
        cin >> n3 ;

        if(n3<_min)
            _min = n3;


        n2--;
    }

    cout<< _min<<" ";

    n1--;
}





    return 0;
}
