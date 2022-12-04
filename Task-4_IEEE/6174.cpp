#include "bits/stdc++.h"
using namespace std;

bool Compare_fun(char first , char sec)
{
    return first > sec;
}

int rotine(int num)
{
  string element = to_string(num);
  int ASC_order = 0, DESC_Order = 0, c=0;
  int s = element.size();
  while(num != 6174)
  {

      sort(element.begin() , element.end());
      ASC_order = stoi(element);
      sort(element.begin() , element.end(), Compare_fun);
      DESC_Order = stoi(element);
      num = DESC_Order - ASC_order;
      element = to_string(num);
      if(element.size() < 4)
      {
          element.append("0");
      }
      c++;
  }
  cout<<c;
}


int main()
{
    int n;
    cin>>n;
    rotine(n);
    return 0;
}
