
#include <iostream>

using namespace std;

int main()
{
    int n , sum = 0;
    cin>>n;
    while(n>=1)
    {

            sum+=n;

        n--;
    }
    cout<<sum;
    return 0;
}