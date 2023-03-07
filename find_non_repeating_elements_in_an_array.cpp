#include<bits/stdc++.h>
// #include "Myutilities.h"
using namespace std;
vector<int> nonrepeating_ele(vector<int> &nums){
  unordered_map<int,int> hash;
  int n=nums.size();
  for(int i=0;i<n;i++){
    if(hash.find(nums[i])==hash.end())
    hash[nums[i]]=1;
    else hash[nums[i]]++;
  }
vector<int> result;
for(int i=0;i<n;i++){
  if(hash[nums[i]]<2 )
  result.push_back(nums[i]);
}
return result;
}
int main(){
  int n;cin>>n;
  vector<int> v(n);
  for(int &i:v)
  cin>>i;
  vector<int>result=nonrepeating_ele(v);
  for(int i:result)
  cout<<i<<" ";
}