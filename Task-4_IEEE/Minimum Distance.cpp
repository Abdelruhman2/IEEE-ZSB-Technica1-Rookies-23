#include "bits/stdc++.h"
using namespace std;


int Min_Dist(int a[], int s)
{
     map<int,int> gool;
    int mdist = INT_MAX ;
    int p_element = 0, c_element = 0;
    for (int i = 0; i < s; i++)
    {
        if (gool.find(a[i]) != gool.end())
        {
            c_element = i;
            p_element = gool[a[i]];
            mdist = min((c_element - p_element),mdist);
        }
        gool[a[i]] = i;
    }
    return (mdist == INT_MAX ? -1 : mdist);
}
void Complete(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
}

int main()
{
    int s;
    cin >> s;
    int a[s];
    Complete(a, s);
    cout << Min_Dist(a, s);

    return 0;
}
