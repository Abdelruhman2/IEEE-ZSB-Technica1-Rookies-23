// C++ program to print all prime factors
#include <bits/stdc++.h>
using namespace std;


void primeFactors(int n)
{
    while (n % 2 == 0)
    {
        // 30
        // 2
        cout << 2 << " ";
        // 15
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // 15
        while (n % i == 0)
        {
            // 3
            cout << i << " ";
            // 5
            n = n/i;
        }
    }
    // 5
    if (n > 2)
        cout << n << " ";
}
int main()
{
    int n;
    cin>>n;
    primeFactors(n);
    return 0;
}

// This is code is contributed by rathbhupendra
