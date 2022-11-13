#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int num=x;
    int r=0;
    while (x!=0)
    {
        r =r*10 + x%10;
        x=x/10;
    }

    if (r==num )
    {
        cout<<r<<endl;
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<r<<endl;
        cout<<"NO"<<endl;
    }

    return 0;
}
