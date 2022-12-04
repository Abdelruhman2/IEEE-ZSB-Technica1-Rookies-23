#include "bits/stdc++.h"
using namespace std;

void List(int arr[], int Size)
{
    for (int i = 0; i < Size; i++)
    {
        cin >> arr[i];
    }
}
bool compare_element(const pair<int, int> a,const pair<int, int> b)
{
    if (a.second == b.second)
        return a.first > b.first;

    return a.second > b.second;
}
void Freq_element (int arr[], int Size, int num_of_freq)
{
    unordered_map <int, int> freq_Array;

    for (int i = 0; i < Size; i++)
        freq_Array[arr[i]]++;

    vector<pair<int, int>> vec(freq_Array.begin(),freq_Array.end());

    sort(vec.begin(), vec.end(), compare_element);
    for (int i = 0; i < num_of_freq; i++)
    {
        cout << vec[i].first << " ";
    }
}
int main()
{
    int Size, num ;
    cin >> Size >> num;
    int arr[Size];
    List(arr,Size);
    Freq_element(arr,Size,num);
    return 0;
}
