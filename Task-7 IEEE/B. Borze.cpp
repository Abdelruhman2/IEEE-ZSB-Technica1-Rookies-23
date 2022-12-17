// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    string s;
    getline(cin,s);
    y = 0;
    int x = s.size();
    while(y<x)
    {
        if(s[y]=='.')
        {
            cout<<"0";
            y=y+1;

        }
        else if(s[y]=='-'&&s[y+1]=='.')
        {
            cout<<"1";
            y=y+2;

        }
        else if(s[y]=='-'&&s[y+1]=='-')
        {
            cout<<"2";
            y=y+2;

        }
    }

    return 0;
}
