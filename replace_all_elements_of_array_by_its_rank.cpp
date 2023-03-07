#include<bits/stdc++.h>
#include "Myutilities.h"
using namespace std;
void replace_by_rank(vector<int> & nums){
  int n=nums.size();
  vector<int> temp=nums;
  sort(nums.begin(),nums.end()); //nums is sorted now
  unordered_map<int,int>hash;
  for(int i=0;i<n;i++){
    hash[nums[i]]=i+1;
  }
  for(int i=0;i<n;i++){
  nums[i]=hash[temp[i]]; 
  }
}
int main(){
  int n;cin>>n;
  vector<int> v(n);
  for(int &i:v)
  cin>>i;
  replace_by_rank(v);
  for(auto i:v)
  cout<<i<<" ";
  return 0;
}