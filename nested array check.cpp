#include<iostream>
using namespace std;

int main()
{
    int x=12,*y,**z,***r;

         y=&x;
            z=&y;
                r=&z;

                cout<<x<<"  "<<"address of x="<<y<<"  "<<*y<<endl;
                    cout<<**z<<endl;

                    (***r)++;
                        cout<<x<<" "<<*y<<" "<<**z<<" "<<***r<<endl;

    return 0;
}
