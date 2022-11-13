#include <iostream>

using namespace std;

int main()
{
    int n1 , n2 , area = 0 , perimetre = 0;
    cin>>n1>>n2;
    area = n1*n2;
    cout<<area<<endl;
    perimetre = (n1 + n2) * 2;
    cout<<perimetre<<endl;
    return 0;
}
