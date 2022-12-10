#include <bits/stdc++.h>
using namespace std;
#define MAX 20000

int main()
{
    int q;
    cin>>q;
    string s;

    const string t = "hackerrank";

    // ahhellllloou

    while(q--)
    {
        cin>>s;
        int x =0;
        for(int i=0; i<s.size(); i++)
    {
        if(s[i]==t[x])
        {
            x++;
        }

    }
    if(x==10)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }

}
