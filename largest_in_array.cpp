#include<bits/stdc++.h>
#include "Myutilities.h"
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> v(n);
  for(int &i:v)
  cin>>i;
  auto it=max_element(v.begin(),v.end());
  cout<<*it;
}