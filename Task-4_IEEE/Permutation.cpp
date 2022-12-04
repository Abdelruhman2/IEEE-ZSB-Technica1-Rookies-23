#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool flag = false;
    string s1, s2;
    cin>>s1>>s2;
    reverse(s1.begin(),s1.end());
    for(int i=0; i<s2.size(); i++)
    {
        for(int j = 0; j<s1.size(); j++)
        {
            if(s1[j]==s2[i])
            {
                if(s1[j+1]==s2[i+1])
                    flag = true;
            }
        }
    }
    if(flag == true)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
