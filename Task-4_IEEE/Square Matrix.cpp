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
    for (int i = 0; i < x; i++)
    {
        for (int j = x-1; j >= 0; j--)
            cout << mat[j][i] << " ";
        cout << "\n";
    }
}
