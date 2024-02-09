#include <iostream>
#include<climits>
using namespace std;

int main()
{
int n;

cin >> n;

int d_n=n*2 , n1=n , n2=1 , n3=-(n-1) , n4=d_n;
int i1=1,i2=1,help=d_n/2;



    while(d_n>0)
    {

        if(d_n>help)
        {
            i1=1;
            while(i1<=n1)
            {

                cout<<" ";
                i1++;

            }
            i2=1;
            while(i2<=(2*n2-1))
            {

                cout<<"*";
                    i2++;

            }
            cout<<"\n";

        }
        else
        {
            i1=1;
             while(i1<=n3)
            {

                cout<<" ";
                 i1++;

            }
             i2=1;
             while(i2<=(2*n4-1))
            {

               cout<<"*";
                i2++;

            }

            cout<<"\n";
        }
      n4--;
      n3++;
      n2++;
      n1--;
      d_n--;
    }













    return 0;
}
