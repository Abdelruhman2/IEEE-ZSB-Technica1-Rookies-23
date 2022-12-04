#include<bits/stdc++.h>
using namespace std;

void complete(vector<string>& str,int Size)
{
    string elemnt;
    for (int i = 0; i < Size; i++)
    {
        cin >> elemnt;
        str.push_back(elemnt);
    }
}

vector<vector<string>> AnaGrams(vector<string>& str)
{
    vector<vector<string> > countiner;
    unordered_map<string,vector<string> > train;
    for(int i=0; i<str.size(); i++)
    {
        string a=str[i];
        sort(a.begin(),a.end());
        train[a].push_back(str[i]);
    }
    for(auto i:train)
    {
        countiner.push_back(i.second);
    }
    return countiner;
}

int main()
{

    vector<string> str ;
    int s;
    vector<vector<string>> solve;
    cin>>s;
    complete(str,s);
    solve=AnaGrams(str);
    for (int i = 0; i <solve.size(); i++)
    {
        for (int j = 0; j < solve[i].size(); j++)
            cout << solve[i][j] <<" ";
        cout << endl;
    }
}
