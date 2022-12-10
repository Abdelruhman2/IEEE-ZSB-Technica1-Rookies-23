#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        int n, y;
        int c = 0;
        cin>>n;
        y = n;
        while(y > 0)
        {
            int current_digit= y%10;
            y /=10;
            if(current_digit!=0 && n % current_digit == 0)
            {
                c++;
            }

        }
        cout<<c<<endl;
    }
}
