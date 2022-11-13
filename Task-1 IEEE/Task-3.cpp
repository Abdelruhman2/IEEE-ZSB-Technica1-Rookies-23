#include <iostream>

using namespace std;

int sum_for(int arr[] , int n)
{
    int fsum = 0;
    for(int i =0;i<n;i++)
    {
        fsum += arr[i];
    }
    return fsum;

}

int sum_while(int arr[] , int n)
{

    int Wsum = 0 , c = 0;
    while(n--)
    {
        Wsum += arr[c];
        c++;
    }
    return Wsum;

}

int rsum = 0;
int RecSum (int arr[] , int n)
{

    if(n>=0)
    {
        rsum += arr[n-1];
        n--;
        RecSum(arr,n);
    }
    return rsum;

}



int main()
{
    int size_;
    cin>>size_;
    int arr[size_];
    int sum1 = 0 , sum2 = 0 , sum3 = 0;

    for(int i=0;i<size_;i++)
    {
        cin>>arr[i];
    }
    sum1 = sum_for(arr,size_);
    sum2 = sum_while(arr,size_);
    sum3 = RecSum(arr,size_);
    cout<<sum1<<endl;
    cout<<sum2<<endl;
    cout<<sum3<<endl;
    return 0;
}
