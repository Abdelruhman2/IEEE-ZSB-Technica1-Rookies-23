#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
   const string t = "hello";
   int x =0;                         // ahhellllloou
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==t[x])
        {
            x++;
        }

    }
    if(x==5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
