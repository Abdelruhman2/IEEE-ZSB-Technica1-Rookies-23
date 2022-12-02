#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x;
    int mat[x][x];
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            cin>>mat[i][j];
        }
    }
    int sum1=0, sum2=0;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(i==j)
            {
                sum1=sum1+mat[i][j];
            }
            if(x-1-j==i)
            {
                sum2=sum2+mat[i][j];
            }
        }
    }
    int abslute = sum1 - sum2;
    cout<<abs(abslute);

    return 0;
}
