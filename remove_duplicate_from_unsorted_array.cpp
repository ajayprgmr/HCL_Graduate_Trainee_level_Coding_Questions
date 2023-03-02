
//an array is sebset of another array or not

#include<bits/stdc++.h>
#include "Myutilities.h"
using namespace std;
vector<int> remove_duplicates(vector<int> &v){  // array is unsorted.

unordered_set<int>hash;
vector<int> u;
for(int i=0;i<v.size();i++){
  if((hash.find(v[i])==hash.end())){
    hash.insert(v[i]);
    u.push_back(v[i]);
  }
 }
 return u;
}
int main(){
  int n1;
  cin>>n1;
  vector<int> v1(n1);
  for(int i=0;i<n1;i++)
  cin>>v1[i];
 vector<int>v2= remove_duplicates(v1);
  for(int i:v2)
  cout<<i<<" ";
  
}