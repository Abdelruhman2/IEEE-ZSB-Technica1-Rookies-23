#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size_;
    cin>>size_;
    int a[size_];
    for(int i=0; i<size_; i++)
    {
        cin>>a[i];

    }
    for(int i=0; i<size_; i++)
    {
        if(a[i]==a[i+1])
        {
            continue;
        }
        cout<<a[i]<<" ";
    }

}
