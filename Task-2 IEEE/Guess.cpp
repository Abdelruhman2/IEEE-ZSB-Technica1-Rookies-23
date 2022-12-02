#include "bits/stdc++.h"
using namespace std;

bool getit(int send, int recieve )
{
    for (int i = 1; i <= 3; ++i)
    {
        if (send%10==recieve)
        {
            return true;
        }
        else
            send/=10;
    }
    return false;
}
bool place(int send, int recieve, int inc)
{

    int num = (send /(int) pow(10,inc))%10;

    if (num==recieve)
        return true;
    else
        return false;
}
int main()
{

    srand(time(NULL));
    int randn= rand()%1000;
    cout<< "Random: "<< randn<<endl;
    int access;
    cin >> access;
    while(access!=randn)
    {
        int hit=0, miss=0;
        for (int i = 0; i < 3; ++i)
        {
            int t=access%10;
            if (getit(randn,t)&& place(randn,t,i))
            {
                ++hit;
            }
            else if (getit(randn,t)&& place(randn,t,i)==false)
            {
                ++miss;
            }
            access/=10;
        }
        cout << "hit = " << hit << " miss = " << miss<<endl;
        cin>>access;
    }
    return 0;
}
