#include<iostream>
using namespace std;
int main()
{

	long long numd, x,sum=0,count=0,ind=1;
	cin >> numd >> x;

	long long* a = new long long[numd];
	for (int i = 0; i < numd&&ind; i++)
	{
		cin >> a[i];
		count++;
		sum += (86400 - a[i]);
		if (sum >= x)
			ind = 0;
	}
	cout << count << endl;
	return 0;
}
