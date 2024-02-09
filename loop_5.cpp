#include <iostream>
#include<climits>
using namespace std;

int main()
{

double N,ns,sum_e=0,sum_o=0,ne=0,no=0; int i=1;

cout<<"Enter number : ";
cin >> N;

while(i<=N)
{

     cin>>ns;

      if(i%2==0)
        {
        sum_e+=ns;
        ne++;
        }
      else
        {
        sum_o+=ns;
        no++;
        }

     i++;

}

cout<<"Average of even position= "<<sum_e/ne<<endl;
cout<<"Average of odd position= "<<sum_o/no;

    return 0;
}
